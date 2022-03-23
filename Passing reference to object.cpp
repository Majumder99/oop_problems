#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int who;
public:
    myclass(int n)
    {
        who=n;
        cout << "Constructing " << who << "\n";
    }
    ~myclass()
    {
        cout << "Destructing " << who << endl;
    }
    int id()
    {
        return who;
    }
};
///Passing value
//void f(myclass o)
//{
//    cout <<"Received " << o.id() << endl;
//}
///Passing reference
void f(myclass &o)
{
    cout << "Received " << o.id() << endl;
}
int main()
{
    myclass x(1);
    f(x);
    return 0;
}
