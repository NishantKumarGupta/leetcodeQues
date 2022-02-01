class Solution {
public:
    int fib(int n) {
        vector<int> vec;
        vec.push_back(0);
        vec.push_back(1);
        int itr=2;
        for(;itr<=n;itr++){
            vec.push_back(vec[itr-1]+vec[itr-2]);
        }
        return vec[n];
    }
};