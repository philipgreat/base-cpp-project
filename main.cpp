#include <iostream>
#include "QueryCache.h"

int main(int argc, char** argv)
{
    
    QueryCache *qc=new QueryCache();

    qc->putToCache("query","yes");
    qc->putToCache("query1","yes");
    qc->putToCache("query2","yes");
    qc->putToCache("query3","yes");
    qc->putToCache("query4","yes");
    qc->putToCache("query43","yes");
    qc->putToCache("query43","yes111");
    
    qc->report();

    const char *key = "query41";
    printf("value of key 1%s= %s \n", key, qc->get(key));

    const char *key2 = "query4";
    printf("value of key 1%s e= %s \n", key, qc->get(key));











    delete qc;
    
    return 0;
}
