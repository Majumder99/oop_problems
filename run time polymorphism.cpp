#include<bits/stdc++.h>
using namespace std;
class B
{
public:
    void display()
    {
        cout << "This is base display" << endl;
    }
    void show()
    {
        cout << "This is base show" << endl;
    }
};
class D : public B
{
public:
    void display()
    {
        cout << "This is derived display" << endl;
    }
    void show()
    {
        cout << "This is derived show" << endl;
    }
};
int main()
{
    D *ptr;
    B b;
    D d;

    ptr = &b;

    return 0;
}
