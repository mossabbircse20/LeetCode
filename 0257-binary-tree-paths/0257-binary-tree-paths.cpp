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
    void pathFinder(TreeNode* root, vector<string>& v,string ss){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            ss = ss + to_string(root->val);
            v.push_back(ss);
            ss = "";
            return;
        }
        
        ss = ss + to_string(root->val) + "->";
        pathFinder(root->left,v,ss);
        pathFinder(root->right,v,ss);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string ss = "";
        
        pathFinder(root,v,ss);
        
        return v;
    }
};