#include<bits/stdc++.h>
using namespace std;
class samp
{
    int i;
public:
    samp(int n)
    {
        i=n;
    }
    int get_i()
    {
        return i;
    }
};
int sqrt_i(samp o)
{
    return o.get_i()*o.get_i();
}
int main()
{
    samp a(10),b(2);
    cout << sqrt_i(a);
    return 0;
}
