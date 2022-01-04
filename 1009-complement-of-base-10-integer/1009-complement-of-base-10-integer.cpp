class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0,factor=1;
        if(!n)
            return 1;
        while(n){
            if(!(n&1))
                ans+=factor;
            n=n>>1;
            factor*=2;
        }
        return ans;
    }
};