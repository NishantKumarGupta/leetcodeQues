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
    vector<int> vec;
    void rec(TreeNode* root){
        if(!root)
            return;
        vec.push_back(root->val);
        rec(root->left);
        rec(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vec.clear();
        rec(root1);
        rec(root2);
        sort(vec.begin(),vec.end());
        return vec;
    }
};