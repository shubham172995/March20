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
        int carry=0;
        ListNode* num=NULL;
        ListNode** node=&num;
        while(l1!=NULL||l2!=NULL){
            int temp=0;
            temp=((l1!=NULL)?l1->val:0)+((l2!=NULL)?l2->val:0)+carry;
            carry=temp/10;
            *node=new ListNode(temp%10);
            node=&((*node)->next);
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        if(carry){
            *node=new ListNode(carry);
            node=&((*node)->next);
        }
        return num;
    }
};