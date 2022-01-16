#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class Shivraj
{
private:
    T1 a;
    T2 b;

public:
    Shivraj(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }
};
int main()
{
    Shivraj<> h(4, 6.4);
    h.display();
    Shivraj<float, char> g(1.4, 'd');
    g.display();
    return 0;
}