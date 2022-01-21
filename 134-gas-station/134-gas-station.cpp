class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=-1,runningSum=0,currSum=0;
        for(int i=0;i<gas.size();i++){
            int temp=cost[i]-gas[i];
            if(temp<=0 and start==-1)
                start=i;
            runningSum+=temp;
            currSum+=temp;
            if(start!=-1 and temp>0 and currSum>0){
                start=-1;
                currSum=0;
            }
        }
        if(runningSum>0)
            return -1;
        else 
            return start;
    }
};