#include <cstdlib>
#include <iostream>
using namespace std;
class Array {
private:
	int* ptr;
	int size;

public:
	Array(int*, int);
	int& operator[](int);
	void print();
};
int& Array::operator[](int index)
{
	if (index >= size) {
		cout << "Array index out of bound, exiting";
		exit(0);
	}
	return ptr[index];
}
Array::Array(int* p = NULL, int s = 0)
{
	size = s;
	ptr = NULL;
	if (s != 0) {
		ptr = new int[size+1];
		for (int i = 0; i < size; i++)
			ptr[i] = p[i];
	}
}
void Array::print()
{
	for (int i = 0; i < size; i++)
		cout << ptr[i] << " ";
	cout << endl;
}
int main()
{
	int a[] = { 1, 2, 4, 5 };
	Array arr1(a, 3);
	arr1[2] = 6;
	arr1.print();
	arr1[3] = 6;
	return 0;
}
