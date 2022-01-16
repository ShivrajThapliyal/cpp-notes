#include <iostream>
using namespace std;
template <class T1, class T2>
class myClass
{
private:
    T1 data1;
    T2 data2;

public:
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << "\t" << this->data2 << endl;
    }
};
int main()
{
    myClass<string, char> obj("hello world", 'c');
    obj.display();

    return 0;
}