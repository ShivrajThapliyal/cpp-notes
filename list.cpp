#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> list1;    // list of length 0
    list<int> list2(7); // list of length 7
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(12);

    list<int>::iterator iter;
    iter = list1.begin();

    iter++;
    cout << *iter << endl;//iterator acts like a pointer
    
    return 0;
    }