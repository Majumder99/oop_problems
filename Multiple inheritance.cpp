#include<bits/stdc++.h>
using namespace std;
class first_base
{
public:
    int x=10;
    void showx()
    {
        cout << x << endl;
    }
};
class second_base
{
public:
    int y=20;
    void showy()
    {
        cout << y << endl;
    }
};
class derive:public first_base,public second_base
{
public:
    int z=100;
    void showz()
    {
        showx();
        showy();
        cout << z << endl;
    }
};
int main()
{
    derive d;
    d.showz();
    return 0;
}
