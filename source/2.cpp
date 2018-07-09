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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1==NULL && l2==NULL) return NULL;
        ListNode *result = NULL;
        ListNode *next = NULL;
        int carry = 0;
        int val = 0;
        while( l1 != NULL || l2 != NULL || carry!=0) {
            val = carry;
            if (l1 != NULL) {
                val += l1->val;
                l1 = l1 -> next;
            }
            if (l2 != NULL) {
                val += l2->val;
                l2 = l2 -> next;
            }
            ListNode *temp = new ListNode(val%10);
            carry = val / 10;
            val %= 10;
            if (result == NULL) {
                result = temp;
                next = result;
            } else {
                next->next = temp;
                next = next->next;
            }
        }
        return result;
    }
};