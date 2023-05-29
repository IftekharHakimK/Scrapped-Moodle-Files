#include <iostream>
using namespace std;

class stack
{
    char *s; // holds the stack
    int top; // index of top of stack
    int size;
    public:
    stack();
    stack(int si);
    ~stack();
    void push(char c);
    char pop();
    int isEmpty();
};


stack::stack()
{
    top = 0;
    size=10;
    cout<<"Constructor called"<<endl;
    s= new char[10];
}
stack::~stack()
{
    delete []s;
    cout<<"Destructor Called"<<endl;
}

stack::stack(int si)
{
    top = 0;
    size=si;
    cout<<"Constructor called"<<endl;
    s= new char[si];
}

void stack::push(char c)
    {
        if(top == size)
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        s[top++] = c;
    }

char stack::pop()
    {
        if(top == 0)
        {
            cout<<"Stack is empty"<<endl;
            return 0; // return null on empty stack
        }
        return s[--top];
    }


int stack::isEmpty()
    {
        return top == 0;
    }

int main(void)
{
	stack s1;
	stack s2(3);

	s2.push('9');
	s2.push('8');
	s2.push('7');
	s2.push('6');

	s1.push('a');
	s1.push('b');
	s1.push('c');


    while(!s1.isEmpty())
	{
	    cout<<"Pop stack : "<<s1.pop()<<endl;
	}

	while(!s2.isEmpty())
	{
	    cout<<"Pop stack : "<<s2.pop()<<endl;
	}

	return 0;
}
