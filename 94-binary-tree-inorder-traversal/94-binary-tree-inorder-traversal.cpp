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
        vector<int> ans;
        if(root == NULL) return ans;
        
        stack<TreeNode*> st;
        TreeNode *mover = root;
        
        while(true){
            if(mover != NULL){
                st.push(mover);
                mover = mover -> left;
            }    
            else{
                if(st.empty()) break;
                mover = st.top();
                st.pop();
                ans.push_back(mover -> val);
                mover = mover -> right;
            }
        }
        return ans;
    }
};