class Solution {
public: //better implementation
    string addStrings(string num1, string num2) {
        string ans="";
        int carry=0,n1l=num1.length()-1,n2l=num2.length()-1;
        while(n1l>=0 or n2l>=0 or carry){
            int v1=(n1l>=0)?num1[n1l--]-'0': 0;
            int v2=(n2l>=0)?num2[n2l--]-'0': 0;
            int temp=v1+v2+carry;
            ans=to_string(temp%10)+ans;
            carry=temp/10;
        }
        return ans;
    }
};