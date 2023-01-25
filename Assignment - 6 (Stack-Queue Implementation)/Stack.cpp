#include <bits/stdc++.h>
using namespace std;

class Stack{
    int A[10000];
    int end=sizeof(A)/sizeof(int);

    public:

    Stack()
    {
        end = 0;
    }

    void push(int val)
    {
        A[end] = val;
        end++;
    }

    void pop()
    {
        end--;
    }

    int top()
    {
        return A[end-1];
    }

    int size()
    {
        return end;   
    }

    bool empty()
    {
        if(end == 0) return true;
        else return false;
    }
};
    
int main()
{
    Stack s;
    s.push(4);
	s.push(5);
	s.push(6);
	cout<<"top: "<<s.top()<<"\n\n";
	cout<<"size: "<<s.size()<<"\n\n";
	s.pop();
	cout<<"empty: "<<s.empty()<<"\n\n";
 
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n\n";
	cout<<"size: "<<s.size()<<"\n\n";
	s.pop();
	cout<<"empty: "<<s.empty()<<"\n\n";
 
	cout<<"top: "<<s.top()<<"\n\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n\n";
	cout<<"empty: "<<s.empty()<<"\n\n";
    s.pop();
    s.pop();
    cout<<"empty: "<<s.empty()<<"\n\n";
    return 0;
}
