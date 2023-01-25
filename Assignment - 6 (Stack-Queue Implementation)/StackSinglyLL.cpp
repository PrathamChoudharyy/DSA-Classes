#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* createNode(int data)
{
    Node* temp = new Node();
    temp->data = data;
    return temp;
}


class Stack{
    Node* head;
    Node* tail;
    int s;

    public:

    Stack()
    {
        s=0;
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
        Node* temp = head;
        if(s==1){
            head->next=NULL;
            tail = head;
        }
        while(temp->next->next)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        s--;
    }

    int top()
    {
        return head->data;
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
