class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int N = 0;
        for(auto iter = head; iter; iter = iter -> next, N++);   // find length 'N' of linked-list
        for(int i = 0; i < N/2; i++)                             // traverse till N/2th node to find the middle
            head = head -> next;
        return head;
    }
};
