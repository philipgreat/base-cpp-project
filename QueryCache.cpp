
#include "QueryCache.h"
#include <stdio.h>
#include <iostream>
#include <iterator>



QueryCache::QueryCache()
{

     cout << __FILE__<<"@"<<__TIME__;
}

QueryCache::~QueryCache()
{


}
//using namespace std;

const char * QueryCache::putToCache(const char* pCmd, const char* pResult)
{
    
    string key = pCmd;
    string value= pResult;
    cacheMap.insert(pair<string, string>(key, value));
   
    return NULL;
    
}

const char * QueryCache::get(const char* pCmd)
{
    
    string key = pCmd;
    
    map<string, string>::iterator itr= cacheMap.find(key);

    if(cacheMap.end()==itr){
        return NULL;
    }
    //string value = cacheMap.find(key)->second;
    return cacheMap.find(key)->second.data();
    
}




void QueryCache::report()
{
    
   map<string, string>::iterator itr;
    cout << "\nThe map cacheMap is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = cacheMap.begin(); itr != cacheMap.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    
}

