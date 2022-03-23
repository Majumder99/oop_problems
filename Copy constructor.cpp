#include<bits/stdc++.h>
using namespace std;
class myclass
{
    string *name;
    int age;
public:
    myclass(string name,int age)
    {
        this->name = new string(name);
        this->age = age;
    }
    void changename(string name,int age)
    {
        *(this->name) = name;
        this->age = age;
    }
    myclass(const myclass &p);
    void intro()
    {
        cout << "i am " << *name << "and " << age << endl;
    }
};
myclass :: myclass(const myclass &p)
{
    cout << "Copy" << endl;
    name = new string(*p.name);
    age = p.age;
}
int main()
{
    myclass ob("Sourav",21);
    ob.intro();
    myclass ob1 = ob;
    ob1.intro();
    ob.changename("SS",22);
    ob.intro();
    ob1.intro();
    return 0;
}
