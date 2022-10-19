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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode *tm=head,*bm=head;
        while(bm!=NULL && bm->next!=NULL){   
            bm=bm->next->next;
            tm=tm->next;
            if(tm==bm) return true;
        }
        return false;
    }
};