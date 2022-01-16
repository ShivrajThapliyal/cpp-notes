#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;
int main()
{
    // fucntion objects :function wrapped in a class so that it is available
    // like an object
    int arr[] = {
        12,
        45,
        1,
        4,
        3,
        5,
        32,
    };
    sort(arr,arr+5);
    sort(arr,arr+6,greater<int>());//sorting in desending orger
    //arr+5 means sort only five first elements
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}