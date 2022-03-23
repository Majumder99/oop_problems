//#include<bits/stdc++.h>
//using namespace std;
//class Base
//{
//    int x,y;
//public:
//    Base(int x1,int y1)
//    {
//        x=x1;
//        y=y1;
//    }
//    Base() {}
//    Base(const Base &ob)
//    {
//        x=ob.x;
//        y=ob.y;
//    }
//    void show()
//    {
//        cout << x << " " << y << endl;
//    }
//};
//int main()
//{
//    Base b1(10,2);
//    Base b2(b1);
//    b2 = b1;
//    b2.show();
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
class String
{
    char *s;
    int Size;
public:
    String(const char *ch = NULL);
    ~String()
    {
        delete [] s;
    };
    String(const String&);
    void show()
    {
        cout << s << endl;
    }
};
String::String(const char *ch)
{
    Size = strlen(ch);
    s = new char[Size+1];
    strcpy(s,ch);
}
String::String(const String &ob)
{
    Size = strlen(ob.s);
    s = new char[Size+1];
    strcpy(s,ob.s);
}
int main()
{
    String str1("Geeks");
    String str2 = str1;

    str1.show();
    str2.show();

    return 0;
}
