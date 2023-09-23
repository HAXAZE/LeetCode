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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* trav = head;
        int count = 0;
        int remNode = 0;
        while(trav!=NULL){
            count++;
            trav=trav->next;
        }
        remNode = count - n;
        ListNode* pre = head;
        trav=head;
        while(remNode!=0){
            pre = trav;
            trav=trav->next;
            remNode--;
        }
        if(pre->next == NULL){
            head = NULL;
        }
        else if(trav->next != NULL){
            if(pre == trav){
                head = trav->next;
            }       
            else{
                pre->next = trav->next;
                trav = NULL;
            }
        }
        else{
            pre->next = NULL;
        }
        return head;
    }
};