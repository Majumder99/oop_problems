#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream outf("item");

    cout << "Enter Name" << ": " ;
    char name[30];
    cin >> name;

    outf << name << endl;

    cout << "Enter age" << ": ";
    int age;
    cin >> age;

    outf << age << endl;

    outf.close();
    ifstream inf("item");

    inf >> name;
    inf >> age;

    cout << name << endl;
    cout << age << endl;

    inf.close();

    return 0;
}
