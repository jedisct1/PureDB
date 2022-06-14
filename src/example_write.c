
/* (C)opyleft 2001-2022 Frank DENIS */

#include <stdio.h>
#include <stdlib.h>
#include <puredb_write.h>

int main(void)
{
    PureDBW dbw;
    
    if (puredbw_open(&dbw, "puredb.index", "puredb.data", "puredb.pdb") != 0) {
        perror("Can't create the database");
        goto end;
    }
    if (puredbw_add_s(&dbw, "key", "content") != 0 ||
        puredbw_add_s(&dbw, "key2", "content2") != 0 ||
        puredbw_add_s(&dbw, "key42", "content42") != 0) {
        perror("Error while inserting key/data pairs");
        goto end;
    }
    if (puredbw_close(&dbw) != 0) {
        perror("Error while closing the database");
    }
    
    end:
    puredbw_free(&dbw);
    
    return 0;
}
