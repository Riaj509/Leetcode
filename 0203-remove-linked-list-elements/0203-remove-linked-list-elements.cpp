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
    ListNode* removeElements(ListNode* head, int val) {
        
        
        if(head==NULL) return NULL;
        
        if(head->next==NULL){
            if(head->val==val) return NULL;
            else return head;
        }
        while(head && head->val==val){
            head=head->next;
        }
        if(head==NULL) return NULL;
        ListNode *sn=head;
        while(sn && sn->next){
            if(sn->next->val==val)sn->next=sn->next->next;
            else sn=sn->next;
        }
        return head;
    }
};