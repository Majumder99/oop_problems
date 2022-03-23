#include<bits/stdc++.h>
using namespace std;
class Time
{
	int hrs,min;
	public:
		Time(int ,int);   // constructor
		operator int();   // casting operator function
		~Time()          // destructor
		{
			cout<<"Destructor called..."<<endl;
		}
};

Time::Time(int a,int b)
{
	cout<<"Constructor called with two parameters..."<<endl;
	hrs=a;
	min=b;
}

Time :: operator int()
{
	cout<<"Class Type to Basic Type Conversion..."<<endl;
	return(hrs*60+min);
}

int main()
{
	int h,m,duration;
	cin >> h >> m;
	Time t(h,m);
	duration = t;
	cout << duration << endl;
//	duration = t.operator int();
//	cout<<"Total Minutes are "<<duration;
	return 0;
}
