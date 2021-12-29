class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int itr=digits.size()-1,carry=0;
        while((itr>=0 and carry) or (itr==digits.size()-1)){
            if(digits[itr]==9){
                digits[itr]=0;
                carry=1;
            }
            else{
                digits[itr]++;
                carry=0;
                break;
            }
            itr--;
        }
        if(carry){
            digits.push_back(1);
            sort(digits.begin(),digits.end(),greater<int>()); 
        }
        return digits;
    }
};