class Solution {
	public:
		int maximumUnits(vector<vector<int>>& bt, int ts) {
			sort(bt.begin(),bt.end(),[](vector<int> a,vector<int> b){
				return a[1]>=b[1];
			});
			int count=0,ans=0;
			for(int i=0;i<bt.size();i++){
				if(count+bt[i][0]<ts){
					ans+=(bt[i][0]*bt[i][1]);
					count+=bt[i][0];
				}    
				else{
					ans+=((ts-count)*bt[i][1]);
					break;
				}    
			}
			return ans;
		}
	};