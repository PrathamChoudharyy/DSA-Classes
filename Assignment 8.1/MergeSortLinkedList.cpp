#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createNode(int val)
{
    node *temp = new node;
    temp->data = val;
    return temp;
}

node *inputLL(int n)
{
    node *head = NULL;
    node *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (i == 0)
        {
            node *temp = createNode(val);
            head = temp;
            tail = temp;
        }
        else
        {
            node *temp = createNode(val);
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}
void printLL(node *tobe)
{
    if (tobe == NULL)
    {
        cout << "Empty node.";
        return;
    }
    node *temp = tobe;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL";
}
int findSize(node *tobe)
{
    node *temp = tobe;
    int s = 0;
    while (temp != NULL)
    {
        s++;
        temp = temp->next;
    }
    return s;
}
node *mergeTwoSortedLinkedList(node *part1, node *part2)
{
    node *answer = new node();
    node *current = answer;
    while (part1 != NULL && part2 != NULL)
    {
        if (part1->data < part2->data)
        {
            current->next = part1;
            part1 = part1->next;
        }
        else
        {
            current->next = part2;
            part2 = part2->next;
        }
        current = current->next;
    }
    while (part1 != NULL)
    {
        current->next = part1;
        part1 = part1->next;
        current = current->next;
    }
    while (part2 != NULL)
    {
        current->next = part2;
        part2 = part2->next;
        current = current->next;
    }
    return answer->next;
}
// node *get_kth_node(node *head, int k)
// {
//     if (k > findSize(head))
//         return NULL;
//     node *temp = head;
//     for (int i = 1; i <= k; i++)
//     {
//         temp = temp->next;
//     }
//     return temp;
// }
void split(node *big, node **part1, node **part2)
{
    int n = findSize(big);
    *part1 = big;
    node *temp = *part1;
    for (int i = 1; i < n / 2; i++) // Or use get kth node.
    {
        big = big->next;
        temp = temp->next;
    }
    *part2 = big->next;
    temp->next = NULL;
}
node *sort_part(node *list)
{
    if (findSize(list) == 1 || findSize(list) == 0)
        return list;
    node *part1 = NULL;
    node *part2 = NULL;
    split(list, &part1, &part2);
    part1 = sort_part(part1);
    part2 = sort_part(part2);
    return mergeTwoSortedLinkedList(part1, part2);
}
// node *get_mid(node *head)
// {
//     node *fast = head;
//     node *slow = head;
//     while (fast && fast->next)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     return slow;
// }
int main()
{
    int n;
    cin >> n;
    node *head;
    head = inputLL(n);
    node *ans;
    ans = sort_part(head);
    // printLL(head);
    // merger(&head);
    printLL(ans);
    // printLinkedList(ans);
    return 0;
}
