/**
 Reverse first half after finding mid
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next)return true;
        ListNode* slow=head,*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode*prev=NULL,*curr=head;
        while(curr!=slow){
            head=head->next;
            curr->next=prev;
            prev=curr;
            curr=head;
        }
         
        //if nodes are present move slow by one step 
        if(fast)slow=slow->next;

        while(prev){
            if(prev->val!=slow->val)return false;
            prev=prev->next;
            slow=slow->next;
        }
        return true;
    }
};