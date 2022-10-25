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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        
        priority_queue<pair<int,ListNode*>>pq;
        
        for(int i=0;i<lists.size();i++){
            ListNode *lis=lists[i];
            
            while(lis){
                pq.push({-lis->val,lis});
                lis=lis->next;
            }
        }
        
        ListNode *head=new ListNode();
        if(pq.size()==0) return NULL;
        head=pq.top().second;
        pq.pop();
        ListNode *tmp=head;
        
        
        
        while(!pq.empty()){
            tmp->next=pq.top().second;
            tmp=tmp->next;
            pq.pop();
        }
        tmp->next=NULL;
        
        return head;
        
    }
};