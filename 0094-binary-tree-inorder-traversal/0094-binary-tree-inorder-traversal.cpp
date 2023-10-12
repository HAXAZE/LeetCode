/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // iterative approach
        vector<int>traversal;
        if(root == NULL) return traversal;
        stack<TreeNode*>stk;
        TreeNode* node = root;
        while(true){
            if(node!=NULL){
                stk.push(node);
                node = node->left;
            }
            else{
                if(stk.empty()) break;
                node = stk.top();
                stk.pop();
                traversal.push_back(node->val);
                node = node->right;
            }
        }
        return traversal;
    }
};