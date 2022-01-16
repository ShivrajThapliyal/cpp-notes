/*
syntax for inheritence :
class derieved-class-name::visibility-mode(access specifier) base-class-name
{
    .................;
}

privately inherited derived calss : the public members of the base class becomes the private members of the inherited class
public: the public members of the derived class becomes the public members of the inherited class
in no case the private members of a class can be inherited


Single inheritence:private
*/
#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void set_ab();
    int get_a(void);
    void show_a(void);
};
class D:public B
{
    int c;

public:
    void mul(void);
    void display(void);
};
void B::set_ab()
{
    a=5;
    b=10;
}
int B::get_a(void)
{
    return a;
}
void B::show_a(void)
{
    cout<<"The value of a is:"<<a<<endl;
}
void D::mul()
{
    c=b*get_a();
}
void D::display()
{
    cout<<"a="<<get_a()<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
}
int main()
{
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();
    d.b=20;
    d.mul();
    d.display();
    return 0;
}