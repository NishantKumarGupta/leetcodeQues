class Solution {
public: //dimaag me aara dp solution
    long long rec(long long n){
        if(n==1)
            return 0;
        if(n%2==0)
            return 1+integerReplacement(n/2);
        else
            return 1+min(rec(n+1),rec(n-1));
    }
    int integerReplacement(int n) {
        return rec((long long)n);
    }
};