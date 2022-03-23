#include<bits/stdc++.h>
using namespace std;
class matrix
{
    int **p;
    int d1,d2;
public:
    matrix(int x,int y);
    void get_element(int i,int j,int value)
    {
        p[i][j] = value;
    }
    int &put_element(int i,int j)
    {
        return p[i][j];
    }
};
matrix :: matrix (int x,int y)
{
    d1=x;
    d2=y;
    p = new int *[d1];
    for(int i=0;i<d1;i++)
    {
        p[i] = new int[d2];
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    matrix o(n,m);
    int i,j,value;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> value;
            o.get_element(i,j,value);
        }
    }
    cout << o.put_element(1,2) << endl;
    return 0;
}
