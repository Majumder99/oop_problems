#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s("ONE TWO THREE FOUR");
    for(int i=0;i<s.length();i++)
    {
        cout << s.at(i);
    }
    cout << endl;
    for(int i=0;i<s.length();i++)
    {
        cout << s[i];
    }
    cout << endl;

    int x1 = s.find("TWO");
    cout << "TWO is " << x1 << endl;

    int x2 = s.find_first_of('T');
    cout << "First T" << " " << x2 << endl;

    int x3 = s.find_last_of('O');
    cout << "Last O" << " " << x3 << endl;

    cout << s.substr(0,12) << endl;

    string s1,s2;
    s1 = "New";
    s2 = "delhi";

    swap(s1,s2);//s1.swap(s2)
    //int x = s1.compare(s2)

    cout << s1 << endl;

    cout << s2 << endl;
    return 0;
}
