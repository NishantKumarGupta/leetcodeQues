class Solution {
public:
    int tribonacci(int n) {
        vector<int> vec;
        vec.push_back(0);
        vec.push_back(1);
        vec.push_back(1);
        int itr=3;
        for(;itr<=n;itr++)
            vec.push_back(vec[itr-1]+vec[itr-2]+vec[itr-3]);
        return vec[n];
    }
};