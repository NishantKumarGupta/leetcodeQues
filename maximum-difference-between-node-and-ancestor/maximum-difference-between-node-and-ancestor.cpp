class Solution {
public:
    pair<pair<int,int>,int> rec(TreeNode* root){
        if(!root)
            return {{INT_MAX,INT_MIN},INT_MIN};
        pair<pair<int,int>,int> left = rec(root->left);
        pair<pair<int,int>,int> right = rec(root->right);
        
        int curr_min = min(min(left.first.first, right.first.first), root->val);
        int curr_max = max(max(left.first.second, right.first.second), root->val);
        int cur_diff;
        
        if(curr_min==root->val || curr_max==root->val)
            cur_diff = max(max(left.second,right.second), abs(curr_min-curr_max));
        else
            cur_diff = max(max(left.second,right.second), max(abs(root->val - curr_min), abs(root->val - curr_max)));
        return {{curr_min, curr_max}, cur_diff};
    }
    
    int maxAncestorDiff(TreeNode* root) {
        pair<pair<int,int>,int> ans = rec(root);
        return ans.second;
    }
};
