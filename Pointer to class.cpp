#include<bits/stdc++.h>
using namespace std;
class samp
{
    int a,b;
public:
    samp(int i,int j)
    {
        a=i;
        b=j;
    }
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
};
int main()
{
    int i;
    samp ob[4]= {samp(1,2),samp(3,4),samp(1123,21231),samp(143,2232)};
    samp *p;
    p=ob;
    for(i=0; i<4; i++)
    {
        cout << p->get_a() << " ";
        cout << p->get_b() << "\n";
        p++;
    }
    cout << endl;
    return 0;
}
