#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a,b;///Automatic define as private
public:
    ///We can print private value like this
//    void set(int i,int j);
//    void show();
   ///Or like this
   void set(int i,int j)
   {
       a=i;
       b=j;
   }
   void show()
   {
       cout << a << " " << b << endl;
   }
};
//void myclass::set(int i,int j)
//{
//    a=i;
//    b=j;
//}
//void myclass::show()
//{
//    cout << a << " " << b << endl;
//}
int main()
{
    myclass ob1,ob2;
    ob1.set(10,4);
    ob2=ob1;
    ob1.show();
    ob2.show();
    return 0;
}
