class Solution {
public:
    int smallestRepunitDivByK(int k) {
        //to get the even k out
        if(k%2==0)  return -1;
        unordered_map<int,bool> mp;
        long long n=1,temp;
        int ans=1;
        while(true){
            if(n%k==0)  break;
            if(mp[n%k]) return -1;
            else{
                mp[n%k]=true;
                ans++;
                temp=n%k;
                n=temp*10+1;
            }
        }
        return ans;
    }
};