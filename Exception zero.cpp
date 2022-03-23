#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    a = 2;
    b = 0;
    try
    {
        if(b==0)
        {
            throw b;
        }
        else
        {
            cout << a/b << endl;
        }
    }
    catch(int)
    {
        cout << "Exception Handle" << endl;
    }
    return 0;
}
