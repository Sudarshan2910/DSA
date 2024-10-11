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
        ListNode* t;
        t=head;
        int c=0;
        ListNode* even=NULL;
        ListNode* odd=NULL;
        ListNode* t1=NULL,*t2=NULL;
        while(t!=NULL)
        {
            ListNode *n =new ListNode();
            n->val=t->val;
            n->next=NULL;
            if(c%2==0)
            {
             if(t1==NULL)
             {
                t1=n;
                even=n;
             }
             else
             {  
                t1->next=n;
                t1=t1->next;
             }
            }
            else
            {
                if(t2==NULL){
                    t2=n;
                    odd=n;
                }
                else
                {
                    t2->next=n;
                    t2=t2->next;
                }
            }
            t=t->next;
            c++;
        }
        if(t1!=NULL){
            t1->next=odd;
        }
        return even;
    }
};