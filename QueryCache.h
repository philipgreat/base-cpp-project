

#ifndef QUERY_CACHE_HEADER
#define QUERY_CACHE_HEADER


#include <map>
  
using namespace std;

class QueryCache
{
    public:
        QueryCache();
        virtual ~QueryCache();
        const char * putToCache(const char* pCmd, const char* pResult) ;
        const char * get(const char* pCmd) ;
        
        void report() ;
        
    private:
        map<string, string> cacheMap;

};



#endif // QUERY_CACHE_HEADER