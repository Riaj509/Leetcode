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
    bool isPalindrome(ListNode* head) {
          ListNode *prev = NULL;
    ListNode *fast = head, *slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        ListNode *prev2 = slow->next;
        slow->next = prev;
        prev = slow;
        slow = prev2;
    }
    if (fast != NULL) { // if it is odd, 
        slow = slow->next;
    }

    while (slow != NULL && prev != NULL) {
        if (prev->val != slow->val) {
            return false;
        }
        slow = slow->next;
        prev = prev->next;
    }

    if (slow != NULL || prev != NULL) {
        return false;
    }

    return true;

}
        
        
       
};