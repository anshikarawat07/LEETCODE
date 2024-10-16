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
    bool identical( ListNode *p1,ListNode *p2)
    {
        while(p1!=NULL && p2!=NULL)
        {
            if(p1->val !=p2->val)
            return 0;
            p1=p1->next;
            p2=p2->next;
        }
        return 1;
    }
     ListNode * reverse ( ListNode *head)
     {
         ListNode *temp=NULL,*p=NULL;
         while(head!=NULL)
         {
            temp=head->next;
            head->next=p;
            p=head;
            head=temp;
         }
         return p;
     }
    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next ==NULL)
        return 1;
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL &&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *p=reverse(slow->next);
        slow->next=NULL;
        int value=identical(head,p);
        reverse(p);
        slow->next=p;
        return value;
    }
};
