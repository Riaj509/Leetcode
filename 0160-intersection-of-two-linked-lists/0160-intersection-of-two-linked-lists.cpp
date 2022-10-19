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
        int n=0,m=0;
        while(fs) {
            n++;
            fs=fs->next;
        } 
         while(sn) {
            m++;
            sn=sn->next;
        }
        int t= abs(n-m);
        if(n>m){
            while(t--) {
            headA=headA->next;
            }
        }
        else {
             while(t--) {
                headB=headB->next;
            }
        }
        
        while(headA && headB){
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};