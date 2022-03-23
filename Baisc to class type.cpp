#include<bits/stdc++.h>
using namespace std;
class String
{
    int len;
    char *p;
public:
    String(){}
    String(const char *s);
    friend void show(const String s);
};
String :: String(const char *s)
{
    len = strlen(s);
    p = new char[len+1];
    strcpy(p,s);
}
void show(const String s)
{
    cout << s.p << endl;
}
int main()
{
    String s1,s2;
    char *name1 = "New";
    char *name2 = "Delhi";
    s1 = String(name1);
    show(s1);
    s2 = name2;
    show(s2);
    return 0;
}
