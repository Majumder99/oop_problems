#include<bits/stdc++.h>
using namespace std;
class samp
{
    int a,b;
public:
    void set_i(int i,int j)
    {
        a=i;
        b=j;
    }
//    void show()
//    {
//        cout << a << " " << b << endl;
//    }
    int returnn()
    {
        return a*b;
    }

};
int main()
{
    samp *p;
    p=new samp;
    p->set_i(3,5);
    cout << "Product is " << p->returnn() << endl;
    return 0;
}
