class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int> ans;
        int l=to_string(low).length(),r=to_string(high).length();
        int k=l,n=s.length();
        while(k<=r){
            for(int i=0;i+k<=n;i++){
                string temp(s,i,k);
                if(stoi(temp)>=low and stoi(temp)<=high)
                    ans.push_back(stoi(temp));
            }
            k++;
        }
        return ans;
    }
};