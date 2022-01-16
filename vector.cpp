#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << "Enter an element to add to the vector:\t" << endl;
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    // creating an iterator for a vector
    vector<int>::iterator iter = vec1.begin();
    //iter+x(int)  also works
    //vec1.insert(iter+2,500(no of copies to be inserted),5(data to be inserted));

    vec1.insert(iter, 555);
    display(vec1);
    return 0;
}