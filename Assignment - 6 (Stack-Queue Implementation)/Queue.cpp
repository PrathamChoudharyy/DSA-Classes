#include <bits/stdc++.h>
using namespace std;

class Queue{
    int A[10000];
    int end;
    int start;

    public:

    Queue()
    {
        start = 0;
        end = 0;
    }

    void push(int val)
    {
        A[end] = val;
        end++;
    }

    void pop()
    {
        start++;
    }

    int front()
    {
        return A[start];
    }

    int back()
    {
        return A[end-1];
    }

    int size()
    {
        return end-start;   
    }

    bool empty()
    {
        if(end-start == 0) return true;
        else return false;
    }
};
    
int main()
{
  Queue q;
  q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.empty()<<"\n";
 
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.empty()<<"\n";
 
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.empty()<<"\n";
	return 0;
}
