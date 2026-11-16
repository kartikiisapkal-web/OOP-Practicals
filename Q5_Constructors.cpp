
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "\nDefault constructor of A";
    }

    A(int x)
    {
        cout << "\nParameterized constructor of A";
    }

    A(const A &obj)
    {
        cout << "\nCopy constructor of A";
    }

    ~A()
    {
        cout << "\nDestructor of A";
    }
};

class B
{
public:
    B()
    {
        cout << "\nDefault constructor of B";
    }

    B(int x)
    {
        cout << "\nParameterized constructor of B";
    }

    B(const B &obj)
    {
        cout << "\nCopy constructor of B";
    }

    ~B()
    {
        cout << "\nDestructor of B";
    }
};

class Demo : public A, public B
{
public:
    Demo()
    {
        cout << "\nDefault constructor of Demo";
    }

    Demo(int x) : A(x), B(x)
    {
        cout << "\nParameterized constructor of Demo";
    }

    Demo(const Demo &obj) : A(obj), B(obj)
    {
        cout << "\nCopy constructor of Demo";
    }

    ~Demo()
    {
        cout << "\nDestructor of Demo";
    }
};

int main()
{
    cout << "\nDefault Constructor:";
    Demo d1;

    cout << "\n\nParameterized Constructor:";
    Demo d2(10);

    cout << "\n\nCopy Constructor:";
    Demo d3(d2);

    cout << "\n";
    return 0;
}
