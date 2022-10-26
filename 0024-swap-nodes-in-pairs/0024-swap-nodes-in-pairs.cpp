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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head) return NULL;
        if(head->next==NULL) return head;
        
        ListNode *ne=new ListNode();
        ListNode *dummy=ne,*cur=head;
        dummy->next=cur;
        
        while(cur && cur->next){
           dummy->next=cur->next;
            cur->next=dummy->next->next;
            dummy->next->next=cur;
            dummy=cur;
            cur=cur->next;
        }
        return ne->next;
    }
};