#include<bits/stdc++.h>
using namespace std;
double rect_area(double length,double width)
{
    return length*width;
}
double rect_area(double length)
{
    return length*length;
}
int main()
{
    cout << rect_area(10.5,10.6) << endl;
    cout << rect_area(10) << endl;
    return 0;
}
