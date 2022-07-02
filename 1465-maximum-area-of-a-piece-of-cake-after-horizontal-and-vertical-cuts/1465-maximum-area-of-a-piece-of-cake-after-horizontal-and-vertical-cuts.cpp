class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long int maxHor = 0, maxVer = 0;
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        maxHor = horizontalCuts[0] - 0;
        maxVer = verticalCuts[0] - 0;
        for(long long int i = 1; i < horizontalCuts.size(); i++){
            maxHor = max((long long)(horizontalCuts[i] - horizontalCuts[i - 1]), maxHor);
        }
        for(long long int i = 1; i < verticalCuts.size(); i++){
            maxVer = max((long long)(verticalCuts[i] - verticalCuts[i - 1]), maxVer);
        }
        maxHor = max((long long)(h - horizontalCuts[horizontalCuts.size() - 1]), maxHor);
        maxVer = max((long long)(w - verticalCuts[verticalCuts.size() - 1]), maxVer);
        long long int ans = maxHor * maxVer;
        ans = ans % (1000000007);
        return ans;
    }
};