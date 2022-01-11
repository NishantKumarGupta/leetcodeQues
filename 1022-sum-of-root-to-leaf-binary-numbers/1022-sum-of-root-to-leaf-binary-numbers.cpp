class Solution {
public:
    long int ans=0;
    void rec(TreeNode* root,string s){
        //base case
        if(!root->left and !root->right){
            s.push_back(root->val + '0'); 
            ans+=stoi(s,0,2);
            return;
        }
        
        s.push_back(root->val + '0');
        
        //rec calls
        if(root->left)
            rec(root->left,s);
        
        if(root->right)
            rec(root->right,s);
    }
    int sumRootToLeaf(TreeNode* root) {
        string s="";
        rec(root,s);
        return ans;
    }
};