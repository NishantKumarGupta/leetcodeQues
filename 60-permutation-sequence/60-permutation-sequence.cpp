class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factorial(n+1,1);
        for(int i=1; i<n+1; i++) factorial[i] = factorial[i-1]* i;
        vector<char> s;
        for(int i=0; i<n; i++) s.push_back(char(i+1+'0'));
        string result;
        k = (k-1)%factorial[n];
        for(int i=0; i<n; i++){
            int index = k/(factorial[n-i-1]);
            result.push_back(s[index]);
            k = k%factorial[n-i-1];
            s.erase(s.begin()+index);
        }
        return result;
    }
};