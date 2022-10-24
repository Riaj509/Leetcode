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
    int getDecimalValue(ListNode* head) {
        string s;
        while(head){
            s+=to_string(head->val);
            head=head->next;
        }
        int sm=0;
        for(int i=0,j=s.size()-1;i<s.size();i++,j--){
            if(s[i]=='1') sm+=(1<<j);
        }
        return sm;
    }
};