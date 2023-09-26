class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // base case
        if(head == NULL || head->next == NULL){
            return head;
        }
        // rec case
        ListNode * nextnode = head->next;
        head->next = swapPairs(nextnode->next);
        nextnode->next = head;
        return nextnode;
    }
};