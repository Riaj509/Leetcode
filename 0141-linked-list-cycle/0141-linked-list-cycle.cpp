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
        if(!head || !head->next) return false;
        
        ListNode *tm=head;
        
        map<ListNode*,int>f;
        while(tm){
            f[tm]++;
            if(f[tm->next]>0) return true;
            tm=tm->next;
        }
        return false;
    }
};