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
    int height(TreeNode* root)
    {
        if(root == NULL) return 0;
        else 
            return max(height(root->left),height(root->right))+1;
    }
    void inorderutil(TreeNode* root, bool &ans)
    {
        if(root!=NULL){
        inorderutil(root->left,ans);
        int dl = height(root->left);
        int dr = height(root->right);
        if(abs(dl-dr)>1)
        {
            ans = ans && false;

        }
        inorderutil(root->right,ans);
    }
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inorderutil(root,ans);
        return ans;
    }
};