class Solution {
public: //SFI
    /*
        Method 1: Hashmap sliding window
        Use a hashmap and store the characters encountered in the window. For every 
        character traversal in our string if the character is not present in the map
        increase the size of window by 1 else decrease the size of window by 1.
        at every step store the maximum size of the window.
        TC - O(n) SC - O(1)
    */
    
    //hashmap sliding window approach
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int ans = 0;
        int start = 0, end = 0;
        while(end<s.length()){
            if(st.find(s[end]) == st.end()){
                st.insert(s[end]);
                end++;
            }
            else{
                st.erase(s[start]);
                start++;
            }
            ans = max(ans,end-start);
        }
        return ans;
    }
};