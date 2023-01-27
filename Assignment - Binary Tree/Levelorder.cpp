#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue<Node*> Q;
        if(root)
        {
            Q.push(root);
            while(!Q.empty())
            {
                Node* temp = Q.front();
                if(temp->left)
                {
                    Q.push(temp->left);
                    temp->left = NULL;
                }
                else
                {
                    cout<<temp->data<<" ";
                    Q.pop();
                    if(temp->right)
                    {
                        Q.push(temp->right);
                    }
                }
            }
        }
    }

}; //End of Solution
