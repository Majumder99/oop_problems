#include <iostream>

using namespace std;

class B
{

protected:

    int i;

    float j;

public:

    B():i(0), j(0)
    {

    }

    B(int a, float b):i(a), j(b)
    {

    }

    void display()
    {

        cout<<i<<" "<<j<<endl;

    }

    friend class A;

};

class A
{

protected:

    int x;

    float y;

public:

    A operator+(B &obj)
    {

        A temp;

        temp.x=this->x+obj.i;

        temp.y=this->y+obj.j;

        return temp;

    }

    A():x(0), y(0)
    {

    }

    A(int a, float b):x(a), y(b)
    {

    }

    void display()
    {

        cout<<x<<" "<<y<<endl;

    }

};

int main()
{

    A a(2,3.14);

    B b(10, 7.98);

    A c = a+b;

    a.display();

    b.display();

    c.display();

    return 0;

}
