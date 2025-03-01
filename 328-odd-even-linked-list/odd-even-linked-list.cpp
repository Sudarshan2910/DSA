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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *temp = head;
        ListNode* h1,*t1;
        if(head==NULL)return head;
        ListNode *n=new ListNode(head->val);
        h1=n;        
        t1=h1;
        int count = 1;
        while (temp != NULL) {
            if (count % 2 != 0 &&count!=1) {
                ListNode *t=new ListNode(temp->val);
                t1->next=t;
                t1=t1->next;
                // cout<<temp->val;
            }
            temp = temp->next;
            count++;
        }
        temp=head;
        count=1;
        while(temp!=NULL)
        {
            if(count%2==0)
            {
                ListNode*t=new ListNode(temp->val);
                t1->next=t;
                t1=t1->next;
            }
            temp=temp->next;
            count++;
        }
        return h1;
    }
};