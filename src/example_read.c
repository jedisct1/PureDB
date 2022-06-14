
/* (C)opyleft 2001-2022 Frank DENIS <j at pureftpd dot org> */

#include <stdio.h>
#include <stdlib.h>
#include <puredb_read.h>

int main(void)
{
    char *data;
    PureDB db;
    off_t retpos;
    size_t retlen;
    int err;

    if (puredb_open(&db, "puredb.pdb") != 0) {
        perror("Can't open the database");
        goto end;
    }
    if ((err = puredb_find_s(&db, "key42", &retpos, &retlen)) != 0) {
        fprintf(stderr, "The key wasn't found [err=%d]\n", err);
        goto end;
    }
    if ((data = puredb_read(&db, retpos, retlen)) != NULL) {
        printf("Matching data: [%s]\n", data);
        puredb_read_free(data);
    }
    end:
    if (puredb_close(&db) != 0) {
        perror("The database couldn't be properly closed");
    }

    return 0;
}
