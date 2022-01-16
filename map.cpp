// used to store key value pairs
// map is an associative array
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Shivraj"] = 98;
    marksMap["raju"] = 45;
    marksMap["Ashu"] = 3;

    marksMap.insert({{"Kozume", 16}, {"Kutte", 45}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    return 0;
}