//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           int pos = 0, neg = 0, ans = 0;
           for(int i = 0; i < n; i++){
               if(arr[i] > 0){
                   pos++;
                   if(neg) neg++;
               }
               else if(arr[i] < 0){
                   swap(neg, pos);
                   neg++;
                   if(pos)  pos++;
               }
               else{
                   pos = 0, neg = 0;
               }
               ans = max(ans, pos);
           }
           return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends