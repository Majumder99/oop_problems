#include<bits/stdc++.h>
using namespace std;
float f(float length,float width)
{
    return length*width;
}
double f(double length,double width)
{
    return length*width;
}
int main()
{
    float x = 10;
    double y = 11;
    cout << f(x,x) << endl;
    cout << f(y,y) << endl;
    cout << f(1,2) << endl;///Ambiguous ///Run it
    return 0;
}
