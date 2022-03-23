#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout << a/b << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch(int)
    {
        cout << "Exception = " << x << endl;
    }
    cout << "END";
    return 0;
}
