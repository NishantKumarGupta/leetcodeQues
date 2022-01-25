class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_map<int,bool> al,bo;
        int ali=0,bob=0;
        for(auto x:aliceSizes){
            al[x]=true;
            ali+=x;
        }
        for(auto x:bobSizes){
            bo[x]=true;
            bob+=x;
        }
        int dif=(ali-bob)/2;
        for(auto x:al){
            for(auto y:bo){
                if((x.first-y.first)==dif)
                    return {x.first,y.first};
            }
        }
        return {};
    }
};