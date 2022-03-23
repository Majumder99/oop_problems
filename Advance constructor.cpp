#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base contruction" << endl;
    }
    virtual ~Base()
    {
        cout << "Base destruction" << endl;
    }
    virtual void DisplayAction() = 0;
};
class Derived1 : public Base
{
public:
    Derived1()
    {
        cout << "Derived1 created" << endl;
    }
    ~Derived1()
    {
        cout << "Derived1 destroyed" << endl;
    }
    void DisplayAction()
    {
        cout << "Action from Derived1" << endl;
    }
};
class Derived2 : public Base
{
public:
    Derived2()
    {
        cout << "Derived2 created" << endl;
    }
    ~Derived2()
    {
        cout << "Derived2 destroyed" << endl;
    }
    void DisplayAction()
    {
        cout << "Action from Derived2" << endl;
    }
};
class User
{
public:
    User() : pBase(nullptr)
    {
        int input;
        cout << "Enter ID (1 or 2): ";
        cin >> input;
        while( (input != 1) && (input != 2) )
        {
            cout << "Enter ID (1 or 2 only): ";
            cin >> input;
        }
        if( input == 1 )
        {
            pBase = new Derived1;
        }
        else
        {
            pBase = new Derived2;
        }
    }

    ~User()
    {
        if( pBase )
        {
            delete pBase;
            pBase = nullptr;
        }
    }
    void Action()
    {
        pBase->DisplayAction();
    }

private:
    Base *pBase;
};

int main()
{
    User *user = new User();
    user->Action();

    delete user;
}
