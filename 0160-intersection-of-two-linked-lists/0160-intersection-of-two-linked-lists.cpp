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
        if(headA==NULL) return NULL;
        if(headB==NULL) return NULL;
            
        
        ListNode *fs=headA,*sn=headB;
        map<ListNode*,int>f;
        while(fs){
            f[fs]++;
            fs=fs->next;
        }
         while(sn){
            if(f[sn]>0) return sn;
            sn=sn->next;
        }
        return NULL;
    }
};