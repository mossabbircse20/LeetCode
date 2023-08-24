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
    void preorderTree(TreeNode* root , vector<int>& v){
        if(root == NULL) return;
        
        v.push_back(root->val);
        preorderTree(root->left,v);
        preorderTree(root->right,v);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        
        preorderTree(root,v);
        
        return v;

    }
};