int speed_up=[]{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     return 0;
 }();
class Solution {
public:
//memoization
    // long long int method(vector<vector<int>>&matrix,int i,int j,int n,vector<vector<int>>&dp)
    // {
    //     if(i==0)
    //       return matrix[i][j];
    //     if(i<0 || j>=n || j<0)
    //       return INT_MAX;
    //     if(dp[i][j]!=-1)
    //       return dp[i][j];
    //     int mini=INT_MAX;
    //     for(int k=0;k<n;k++)
    //     {
    //         if(k!=j)
    //           mini=min(mini,int(matrix[i][j]+method(matrix,i-1,k,n,dp)));
    //     }
    //     return dp[i][j]=mini;
    // }
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        //tabulation
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int mini=1e9;
        for(int i=0;i<n;i++)
           dp[0][i]=matrix[0][i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    mini=1e9;
                    for(int k=0;k<n;k++)
                     {
                             if(k!=j)
                                mini=min(mini,matrix[i][j]+dp[i-1][k]);
                      }
                 dp[i][j]=mini;
                }
        }
        for(int j=0;j<n;j++)
          mini=min(mini,dp[n-1][j]);
        return mini;
    }
};
