/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode head(0), *tmp=&head;
        int cary=0;
        
        while(l1 || l2 || cary){
            if(l1) cary+=l1->val,l1=l1->next;
            if(l2)cary+=l2->val,l2=l2->next;
            tmp->next=new ListNode(cary%10);
            cary/=10;
            tmp=tmp->next;
        }
        return head.next;
        
    }
};