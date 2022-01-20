class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minn=1,maxx=INT_MIN;
        for(auto x:piles)
            maxx=max(maxx,x);
        
        int ans=maxx;
        while(minn<=maxx){
            int mid=minn+(maxx-minn)/2;
            int sum=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%mid==0)
                    sum+=piles[i]/mid;
                else
                    sum+=piles[i]/mid+1;
            }
            if(mid>ans)
                break;
                
            if(sum<=h){
                ans=min(mid,ans);
                maxx=mid-1;
            }
            else if(sum>h)
                minn=mid+1;
        }
        return ans;       
    }
};