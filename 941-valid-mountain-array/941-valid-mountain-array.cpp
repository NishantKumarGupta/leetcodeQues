class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int maxx=INT_MIN,pos=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxx){
                maxx=arr[i];
                pos=i;
            }
        }
        if(pos==0 or pos==arr.size()-1)
            return false;
        for(int i=1;i<=pos;i++)
            if(arr[i]<=arr[i-1])
                return false;
        for(int i=pos+1;i<arr.size();i++)
            if(arr[i]>=arr[i-1])
                return false;
        return true;
    }
};