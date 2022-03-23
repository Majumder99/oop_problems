///Constructor starts from base to derive
///Destructor starts form derive to base
#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Constructing From base" << endl;
    }
    ~base()
    {
        cout << "Destructing From base" << endl;
    }
};
class derive:public base
{
public:
    derive()
    {
        cout << "Constructing From Derive" << endl;
    }
    ~derive()
    {
        cout << "Destructing From Derive" << endl;
    }
};
int main()
{
    derive o;
    return 0;
}
