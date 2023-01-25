#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data)
{
    Node* temp = new Node();
    temp->data = data;
    return temp;
}

class Queue{
    Node* head;
    Node* tail;
    int s;

    public:

    Queue()
    {
        s= 0;
        head = tail;
    }

    void push(int val)
    {
        Node* temp = createNode(val);
        if(s==0)
        {   
            head = temp;
            tail = head;
            s++;
        }
        else{
            tail->next = temp;
            tail = tail->next;
            s++;
        }
    }

    void pop()
    {
        if(head && head->next){
            head = head->next;
        }
        else head=NULL;
        s--;
    }

    int front()
    {
        return head->data;
    }

    int back()
    {
        return tail->data;
    }

    int size()
    {
        return s;  
    }

    bool empty()
    {
        if(s == 0) return true;
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
