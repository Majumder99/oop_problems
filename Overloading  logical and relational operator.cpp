#include<bits/stdc++.h>
using namespace std;
class coord
{
    int x,y;
public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int i,int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i,int &j)
    {
        i=x;
        j=y;
    }
    int operator == (coord ob1);
    int operator && (coord ob2);
};
int coord::operator==(coord ob1)
{
    return (x==ob1.x)&&(y==ob1.y);
}
int coord::operator&&(coord ob2)
{
    return (x&&ob2.x)&&(y&&ob2.y);
}
int main()
{
    coord o1(10,10),o2(10,10),o3(2,4),o4(0,0);
    if(o1==o2)
    {
        cout << "O1 and O2 Equal" << endl;
    }
    else
        cout << "O1 and O2 not equal" << endl;
    if(o1==o3)
    {
        cout << "O1 and O3 Equal" << endl;
    }
    else
        cout << "O1 and O3 not equal" << endl;
    if(o1&&o3)
    {
        cout << "O1 and O3 Same" << endl;
    }
    else
        cout << "O1 and O3 not Same" << endl;
    if(o1&&o4)
    {
        cout << "O1 and O4 Same" << endl;
    }
    else
        cout << "O1 and O4 not Same" << endl;
    return 0;
}
