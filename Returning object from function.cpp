#include<bits/stdc++.h>
using namespace std;
class samp
{
    char s[80];
public:
    void show()
    {
        cout << s << "\n";
    }
    void set(char *str)
    {
        strcpy(s,str);
    }
};
samp input()
{
    char s[80];
    samp str;
    cout << "Give string : ";
    cin >> s;
    str.set(s);
    return str;
}
int main()
{
    samp ob;
    ob=input();
    ob.show();
    return 0;
}
