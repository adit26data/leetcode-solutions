class Solution {
public:
    int method(int m,int n,vector<vector<int>>&dp)
    {
        if(m==1 || n==1)
           return 1;
        if(dp[m][n]!=-1)
          return dp[m][n];
        return dp[m][n]=method(m-1,n,dp)+method(m,n-1,dp);
    }
    int uniquePaths(int m, int n) 
    {
        //recursion based approach
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return int(method(m,n,dp) % int(2*pow(10,9)));

        
    }
};
