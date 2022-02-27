class Solution {
public:
    vector<unsigned long long int> lmost;
    vector<unsigned long long int> rmost;
    
    void help(TreeNode* root, unsigned long long int val,int level)
    {
        if(!root)
            return;
        
        if(lmost.size()<=level)
            lmost.push_back(val);
        
        if(rmost.size()<=level)
            rmost.push_back(val);
        
        if(lmost[level]>val)
            lmost[level] = val;
        
        if(rmost[level]<val)
            rmost[level] = val;
        
        help(root->left,2*val+1,level+1);
        help(root->right,2*val+2,level+1);
        
    }
    int widthOfBinaryTree(TreeNode* root) {
        help(root,1,0);
        //return rmost - lmost;
        int mx = 0;
        for(int i=0;i<lmost.size();i++)
            mx = max(mx,int(rmost[i]-lmost[i]));
        
        return mx+1;
    }
};