#include<bits/stdc++.h>
using namespace std;
class add
{
    int real,img;
public:
    add()
    {
        real = 0;
        img = 0;
    }
    add(int i,int j)
    {
        real = i;
        img = j;
    }
    add operator++();
    void print()
    {
        cout << real << " " << img << endl;
    }
};
add add::operator++()
{
    real++;
    img++;
    return *this;
}
int main()
{
    add o1(2,3),o2(4,5),o3;
    //o3 = o1 * o2;//o3 = o1.add(o2)
    ++o1;
    o1.print();
    return 0;
}
