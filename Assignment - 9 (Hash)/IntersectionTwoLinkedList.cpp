/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> LL;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        ListNode* temp3=headA;
        while(temp1){
            LL[temp1]++;
            temp1=temp1->next;
        }
        while(temp2){
            LL[temp2]++;
            temp2=temp2->next;
        }
        while(temp3){
            if(LL[temp3]>1){
                return temp3;
            }
            temp3=temp3->next;
        }
        return NULL;
    }
};
