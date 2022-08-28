class Solution {
public:
    void inverter(TreeNode* root){
        if(!root) return;
        
        TreeNode* tempNode = root -> left;
        root -> left = root -> right;
        root -> right = tempNode;
        
        inverter(root -> left);
        inverter(root -> right);
    }
    TreeNode* invertTree(TreeNode* root) {
        inverter(root);
        return root;
    }
};