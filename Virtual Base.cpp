#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    int i;
};
class derived1:virtual public base
{
public:
    int j;
};
class derived2:virtual public base
{
public:
    int k;
};
class derived3:public derived1,public derived2
{
public:
    int product()
    {
        return i*j*k;
    }

};
int main()
{
    derived3 d;
    d.i = 10;
    d.j = 10;
    d.k = 10;
    cout << d.product() << endl;
    return 0;
}
