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
    unordered_map<int,int>mp;
    void inorder(TreeNode* root){
        if(root == NULL)
            return;
        inorder(root->left);
        mp[root->val]++;
        inorder(root->right);
       
    }

    vector<int> findMode(TreeNode* root) {

        vector<int>ans;
        inorder(root);
        priority_queue<pair<int,int>>pq;
        for(auto it= mp.begin();it!=mp.end();it++){
            pq.push({it->second,it->first});
        }
        int mx = pq.top().first;
        while(pq.top().first == mx && !pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};