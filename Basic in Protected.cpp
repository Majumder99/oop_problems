#include<bits/stdc++.h>
using namespace std;
class base
{
protected:
    int x;
public:
    void setx(int n)
    {
        x=n;
    }
    void showx()
    {
        cout << x << endl;
    }
};
//class derived:public base
//{
//    int y;
//public:
//    void sety(int n)
//    {
//        y=n;
//    }
//    void showy()
//    {
//        cout << y << x << endl;
//    }
//};
class derived:protected base
{
    ///Jai kori an keno ta accessible na
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    derived ob;
    ob.setx(10);
    ob.sety(20);
    ob.showx();
    ob.showy();
    return 0;
}
