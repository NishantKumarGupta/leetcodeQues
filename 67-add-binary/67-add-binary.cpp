class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string ans;
        int carryAdder = 0;
        
        while(i>=0 || j>=0 || carryAdder){
            if(i>=0){
                carryAdder += a[i] - '0';
                i--;
            }
            if(j>=0){
                carryAdder += b[j] - '0';
                j--;
            }
            
            ans += (carryAdder%2 + '0');
            carryAdder = carryAdder/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};