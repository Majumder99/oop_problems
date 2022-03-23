#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int n,a;
public:
    myclass(int i,int j)
    {
        n=i;
        a=j;
    }
    friend int fact(myclass ob);
};
int fact(myclass ob)
{
    if(!(ob.n%ob.a))
        return 1;
    else
        return 0;
}
int main()
{
    myclass ob(10,2);
    if(fact(ob))
        cout << "Good" << endl;
    else
        cout << "Bad" << endl;
    return 0;
}
