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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            head = head->next;  
        }
        if (head == NULL) {
            return head;
        }
        ListNode* p = head;

        while (p->next != NULL) {
            if (p->next->val == val) {
                p->next = p->next->next;
            } else {
                p = p->next;
            }
        }

        return head;
    }
};
