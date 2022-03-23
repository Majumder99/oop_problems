#include<bits/stdc++.h>
using namespace std;
template<class t1,class t2>
class base
{
    t1 a;
    t2 b;
public:
    base(t1 x,t2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    int x,y;
    char s,d;
    x = 10;
    y = 2;
    s = 's';
    d = 'd';
    base<int,char>b1(x,s);
    base<int,char>b2(y,d);
    b1.show();
    b2.show();
    return 0;
}
