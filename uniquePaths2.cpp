int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int method(vector<vector<int>>&obstacleGrid,int m,int n,vector<vector<int>>&dp)
    {
        if(m>=0 && n>=0 && obstacleGrid[m][n]==1)
          return 0;
        if(m==0 && n==0)
          return 1;
        if(m<0 || n<0)
          return 0;
        if(dp[m][n]!=-1)
          return dp[m][n];
        return dp[m][n]=method(obstacleGrid,m-1,n,dp)+method(obstacleGrid,m,n-1,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        //memoization
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return int(method(obstacleGrid,m-1,n-1,dp)%int(2*pow(10,9)));


        
    }
};
