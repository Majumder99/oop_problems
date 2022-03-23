#include<iostream>
using namespace std;
class Person {
public:
	//Person(int x) { cout << "Person::Person(int ) called" << endl; }
	Person()	 { cout << "Person::Person() called" << endl; }
};

class Faculty : virtual public Person {
public:
	Faculty():Person() {
	cout<<"Faculty::Faculty(int ) called"<< endl;
	}
};

class Student : virtual public Person {
public:
	Student():Person() {
		cout<<"Student::Student(int ) called"<< endl;
	}
};

class TA : public Faculty, public Student {
public:
	TA():Student(), Faculty()//, Person(x)
	{
		cout<<"TA::TA(int ) called"<< endl;
	}
};

int main()
{
	TA ta1;
}

