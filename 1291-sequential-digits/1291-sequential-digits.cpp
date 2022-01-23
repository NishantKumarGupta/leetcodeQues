class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int> ans;
        int l=to_string(low).length(),r=to_string(high).length();
        while(l<=r){
            for(int i=0;i+l<=9;i++){
                string temp(s,i,l);
                if(stoi(temp)>=low and stoi(temp)<=high)
                    ans.push_back(stoi(temp));
            }
            l++;
        }
        return ans;
    }
};