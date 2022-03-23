#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream file;
    string line;
    file.open("Sourav.txt");
    while(getline(file,line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}
