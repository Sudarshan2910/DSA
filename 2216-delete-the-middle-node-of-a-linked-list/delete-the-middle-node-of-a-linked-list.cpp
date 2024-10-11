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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        int del_node_ind=n/2;
        ListNode* prev,*cur;
        
        if(n==1)return head=NULL;

        cur=head;
        prev=NULL;

        while(count<n){
            if(count==del_node_ind)
            {
                prev->next=cur->next;
                break;
            }
            prev=cur;
            cur=cur->next;
            count++;
        }
       return head;
    }
};