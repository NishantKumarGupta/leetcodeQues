class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int i=0,carry=0,n1l=num1.length()-1,n2l=num2.length()-1;
        while(i<=n1l and i<=n2l){
            int temp=(num1[n1l-i]-'0')+(num2[n2l-i]-'0')+carry;
            carry=0;
            if(temp>=10){
                carry=temp/10;
                temp%=10;
            }
            ans=to_string(temp)+ans;
            i++;
        }
        if(i<=n1l){
            while(i<=n1l){
                int temp=(num1[n1l-i]-'0')+carry;
                carry=0;
                if(temp>=10){
                    carry=temp/10;
                    temp%=10;
                }
                ans=to_string(temp)+ans;
                i++;
            }
        }
        else if(i<=n2l){
            while(i<=n2l){
                int temp=(num2[n2l-i]-'0')+carry;
                carry=0;
                if(temp>=10){
                    carry=temp/10;
                    temp%=10;
                }
                ans=to_string(temp)+ans;
                i++;
            }
        }
        if(carry)
            ans=to_string(carry)+ans;
        return ans;
    }
};