//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      long long int totZero = n * n;
      vector<bool> row(n + 1, false), col(n + 1, false);
      int totRow = 0, totCol = 0;
      vector<long long> ans;
      for(auto query: arr){
          int tempRow = query[0];
          int tempCol = query[1];
          if(!row[tempRow]){
              row[tempRow] = true;
              totRow++;
          }
          if(!col[tempCol]){
              col[tempCol] = true;
              totCol++;
          }
          long long currOne = ((totRow + totCol) * n) - (totRow * totCol);
          ans.push_back(totZero - currOne);
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends