int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
//memoization approach
    // long long int method(vector<vector<int>>&grid,int m,int n,vector<vector<int>>&dp)
    // {
    //     if(m<0 ||n<0)
    //        return INT_MAX;
    //     if(m==0 && n==0)
    //       return grid[0][0];
    //     if(dp[m][n]!=-1)
    //       return dp[m][n];
    //    long long int up=grid[m][n]+method(grid,m-1,n,dp);
    //    long long int down=grid[m][n]+method(grid,m,n-1,dp);
    //    return dp[m][n]=min(up,down);
          
    // }
    int minPathSum(vector<vector<int>>& grid) 
    {
        //tabular method
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                  dp[0][0]=grid[0][0];
            else
            {
                 
                long long int up=grid[i][j];
                if(i>0)
                  up+=dp[i-1][j];
                else
                  up+=1e9;
                long long int down=grid[i][j];
                if(j>0)
                  down+=dp[i][j-1];
                else
                  down+=1e9;
                dp[i][j]=min(up,down);
            }
            }
        }
        return dp[m-1][n-1];

    }
};
