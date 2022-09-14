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
    int robb(TreeNode *root, map<TreeNode*, int> &mp){
        if(root == NULL) return 0;
        if(mp.find(root) != mp.end()){
            return mp[root];
        }
        int robLeft = robb(root -> left, mp);
        int robRight = robb(root -> right, mp);
        int lele = 0, leri = 0, rile = 0, riri = 0;
        if(root -> left){
            lele = robb(root -> left -> left, mp);
            leri = robb(root -> left -> right, mp);
        }    
        if(root -> right){
            rile = robb(root -> right -> left, mp);
            riri = robb(root -> right -> right, mp);
        }
        return mp[root] = max(root -> val + lele + leri + rile + riri, robLeft + robRight);
    }
    int rob(TreeNode* root) {
        map<TreeNode*, int> mp;
        return robb(root, mp);
    }
};