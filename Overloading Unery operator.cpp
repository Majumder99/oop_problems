#include<bits/stdc++.h>
using namespace std;
class coord
{
    int x;
public:
    coord()
    {
        x=0;
    }
    coord(int i)
    {
        x=i;
    }
    coord operator++();
};
coord coord :: operator++()
{
    return x++;
}
int main()
{
    coord o1(10);
    cout << o1++;
    return 0;
}
