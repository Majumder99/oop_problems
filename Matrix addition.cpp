#include<bits/stdc++.h>
using namespace std;
class matrix
{
    int row,column;
    int a[10][10];
public:
    matrix(int e,int f,int d[])
    {
        int i,j;
        row=e;
        column=f;
        int m=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                a[i][j]=d[m];
                m=m+1;
            }
        }
    }
    matrix() {}
    matrix operator+(matrix b)
    {
        matrix p;
        int i,j;
        p.row=row;
        p.column=column;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                p.a[i][j]=a[i][j]+b.a[i][j];
            }
        }
        return p;
    }
    void show()
    {
        int i,j;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int a,b,c[100],i;
    cout<<"Enter row and column number"<<endl;
    cin>>a>>b;
    cout<<"Enter values"<<endl;
    for(i=0; i<a*b; i++)
    {
        cin>>c[i];
    }
    matrix m1(a,b,c);
    matrix m2(a,b,c);
    matrix m3;
    m3=m1+m2;
    m3.show();
}
