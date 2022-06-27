class Solution {
public:
    int minPartitions(string n) {
        // int maxx=0;
        // for(auto c:n){
        //     if((c-'0')>maxx)
        //         maxx=c-'0';
        // }
        return *max_element(n.begin(),n.end()) - '0';
    }
};