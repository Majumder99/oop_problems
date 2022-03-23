#include<bits/stdc++.h>
using namespace std;
class samp
{
    int i;
public:
    void sett(int n)
    {
        i=n;
    }
    int get()
    {
        return i;
    }
};
int main()
{
    samp ob[4];
    for(int i=1; i<=4; i++)
    {
        ob[i].sett(i);
    }
    for(int i=1; i<=4; i++)
    {
        cout << ob[i].get() << " ";
    }
    return 0;
}
