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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        /*head->val=(l1->val)<(l2->val)?(l1->val):(l2->val);
        if((l1->val)<(l2->val)){
            l1=l1->next;
        }
        else l2=l2->next;*/
        ListNode** temp=&head;
        //cout<<(*temp)->val<<" "<<l1->val<<" "<<l2->val<<endl;
        while(l1||l2){
            if(!l1){
                *temp=new ListNode(NULL);
                *temp=l2;
                l2=l2->next;
                //cout<<(*temp)->val<<" "<<l1->val<<" "<<l2->val<<endl;
                temp=&((*temp)->next);
            }
            else if(!l2){
                *temp=new ListNode(NULL);
                *temp=l1;
                l1=l1->next;
                //cout<<(*temp)->val<<" "<<l1->val<<" "<<l2->val<<endl;
                temp=&((*temp)->next);
            }
            else if((l1->val)<(l2->val)){
                *temp=new ListNode(NULL);
                *temp=l1;
                l1=l1->next;
                //cout<<(*temp)->val<<" "<<l1->val<<" "<<l2->val<<endl;
                temp=&((*temp)->next);
            }
            else{
                *temp=new ListNode(NULL);
                *temp=l2;
                l2=l2->next;
                //cout<<(*temp)->val<<" "<<l1->val<<" "<<l2->val<<endl;
                temp=&((*temp)->next);
            }
        }
        return head;
    }
};