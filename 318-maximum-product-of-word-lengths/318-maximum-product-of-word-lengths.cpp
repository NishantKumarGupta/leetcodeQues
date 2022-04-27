class Solution {
public:
    bool checkDuplicate(int i,int j,vector<vector<int>> &freq){
        for(int x=0;x<26;x++){
            if(freq[i][x] and freq[j][x])
                return false;
        }
        return true;
    }
    
    int maxProduct(vector<string>& words) {
        int firs=-1,sec=-1,ans=0;
        vector<vector<int>> freq;
        for(auto s:words){
            vector<int> temp(26,0);
            sec=max(sec,firs);
            firs=max(firs,(int)s.length());
            for(auto c:s){
                temp[c-'a']++;
            }
            freq.push_back(temp);
        }
        int low=1,high=firs*sec;
        while(low<=high){
            bool flag=false;
            int mid=low+(high-low)/2;
            for(int i=0;i+1<words.size();i++){
                for(int j=i+1;j<words.size();j++){
                    if((int)(words[i].length()*words[j].length())>=mid){
                        if(checkDuplicate(i,j,freq)){
                            ans=max(ans,(int)(words[i].length()*words[j].length()));
                            flag=true;
                            break;
                        }
                    }
                }
                if(flag)
                    break;
            }
            if(flag)
                low=ans+1;
            else
                high=mid-1;
        }
        return ans;
    }
};