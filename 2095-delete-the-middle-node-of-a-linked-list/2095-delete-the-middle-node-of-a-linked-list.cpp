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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr)return nullptr;
        
        ListNode *sl=head,*fs=head->next->next;
        
        while(fs!=nullptr && fs->next!=nullptr){
            sl=sl->next;
            fs=fs->next->next;
        }
        sl->next=sl->next->next;
        return head;
    }
};