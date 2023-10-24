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
    vector<int> largestValues(TreeNode* root) {
        if(root ==NULL)return{};
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);

        while(!q.empty()){
            int t = INT_MIN;
            int n = q.size();
            while(n--){
                TreeNode* c = q.front();
                q.pop();
                t = max(t,c->val);
                if(c->left){
                    q.push(c->left);
                }
                if(c->right){
                    q.push(c->right);
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};