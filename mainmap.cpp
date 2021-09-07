#include <iostream>
#include <iterator>
#include <map>
  
using namespace std;


int main()
{
  
    map<string, string> cacheMap;
    cacheMap.insert(pair<string, string>("query 1 2", "123"));

    map<string, string>::iterator itr;
    cout << "\nThe map cacheMap is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = cacheMap.begin(); itr != cacheMap.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    return 0;




}



int main001()
{
  
    // empty map container
    map<int, int> cacheMap;
  
    // insert elements in random order
    cacheMap.insert(pair<int, int>(1, 40));
    cacheMap.insert(pair<int, int>(2, 30));
    cacheMap.insert(pair<int, int>(3, 60));
    cacheMap.insert(pair<int, int>(4, 20));
    cacheMap.insert(pair<int, int>(5, 50));
    cacheMap.insert(pair<int, int>(6, 50));
    cacheMap.insert(pair<int, int>(7, 10));
  
    // printing map cacheMap
    map<int, int>::iterator itr;
    cout << "\nThe map cacheMap is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = cacheMap.begin(); itr != cacheMap.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
  
    // assigning the elements from cacheMap to gquiz2
    map<int, int> gquiz2(cacheMap.begin(), cacheMap.end());
  
    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from cacheMap is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
  
    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
  
    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << endl;
  
    // lower bound and upper bound for map cacheMap key = 5
    cout << "cacheMap.lower_bound(5) : "
         << "\tKEY = ";
    cout << cacheMap.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << cacheMap.lower_bound(5)->second << endl;
    cout << "cacheMap.upper_bound(5) : "
         << "\tKEY = ";
    cout << cacheMap.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << cacheMap.upper_bound(5)->second << endl;
  
    return 0;
}

