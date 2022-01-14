class Solution {
public:
    int myAtoi(string s) {
        stringstream temp(s);
        int ans=0;
        temp>>ans;
        return ans;
    }
};