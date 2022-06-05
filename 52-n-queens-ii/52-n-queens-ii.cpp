class Solution {
public:
    int c = 0;
    bool isSafe(int r,int co,vector<vector<int> > &a)
    {
        for(int i=0;i<r;i++)
        {
            if(a[i][co]==1)
                return false;
        }
        
        for(int i=r-1,j=co-1;i>=0&&j>=0;i--,j--)
        {
            if(a[i][j]==1)
                return false;
        }
        for(int i=r-1,j=co+1;i>=0&&j<a.size();i--,j++)
        {
            if(a[i][j]==1)
                return false;
        }
        return true;
    }
    
    void queen(int k,vector<vector<int> > &a)
    {
        if(k==a.size())
        {
            c++;
            return;
        }
        else
        {
            for(int i=0;i<a.size();i++)
            {
                if(isSafe(k,i,a))
                {
                    a[k][i] = 1;
                    queen(k+1,a);
                    a[k][i] = 0;
                }
            }
        }
    }
    
    int totalNQueens(int n) {
        vector<int> x(n,0);
        vector<vector<int> > a(n,x);
        
        queen(0,a);
        return c;
    }
};