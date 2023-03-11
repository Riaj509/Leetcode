/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slw = head, *fast = head;
        if (slw == NULL)
            return NULL;

        while (fast && fast->next)
        {
            slw = slw->next;
            fast = fast->next->next;
            if (slw == fast)
            {
                slw = head;
                while (slw != fast)
                {
                    slw = slw->next;
                    fast = fast->next;
                }
                return slw;
            }
        }
        return NULL;
    }
};