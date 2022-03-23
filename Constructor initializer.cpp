#include<bits/stdc++.h>
using namespace std;
class myclass
{
public:
    const int examfee;
    myclass(int n)
        : examfee(n)
    {
        cout << n << endl;
    }
};
typedef class myclass m;
int main()
{
    m S(100);
    return 0;
}
