#define SIZE 10
#include<bits/stdc++.h>
using namespace std;
class stackk
{
    char stck[SIZE];
    int tos;
public:
    stackk();///Constructor
    void push(char ch);
    char pop();
};
///Initialize the stack
stackk::stackk()
{
    tos=0;
}
///Push a character
void stackk::push(char ch)
{
    if(tos==SIZE)
    {
        cout << "Stack is overflow\n";
        return;
    }
    stck[tos]=ch;
    tos++;
}
///Deleting character from stack
char stackk::pop()
{
    if(tos==0)
    {
        cout << "Stack is underflow\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stackk s1,s2;
    int i;
    s1.push('a');
    s1.push('b');
    s1.push('v');
    s1.push('c');
    s1.push('d');
    for(i=0; i<5; i++)
    {
        cout << s1.pop() << " ";
    }
    return 0;
}
