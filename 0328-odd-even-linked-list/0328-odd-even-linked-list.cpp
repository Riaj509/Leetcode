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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
            
        ListNode *fs=head->next,*cur_fs=head,*cur_sn=fs;
        
        while(cur_sn  && cur_sn->next ){
          cur_fs->next=cur_sn->next;
            cur_fs=cur_fs->next;
            cur_sn->next=cur_fs->next;
            cur_sn=cur_sn->next;
        }
        
        cur_fs->next=fs;
        
        return head;
        
        
    }
};