#include<bits/stdc++.h>
using namespace std;
class myclass
{
public:
    int id;
    double gpa;
    void result()
    {
        cout << id << " " << gpa << endl;
    }
};
int main()
{
    myclass Sourav;
    Sourav.id=101;
    Sourav.gpa=5.00;
    Sourav.result();
    return 0;
}
