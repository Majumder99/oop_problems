#include<bits/stdc++.h>
using namespace std;
class samp
{
    int a;
    char b[100];
public:
    samp(char *c,int f)
    {
        strcpy(this->b,c);
        this->a=f;
    }
    void show();
};
void samp::show()
{
    cout << "Integer " << this->a << endl;
    cout << "String " << this->b << endl;
}
int main()
{
    samp ob("Sourav",100);
    ob.show();
    return 0;
}
