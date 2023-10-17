//memoization

// class Solution {
// public:
//     long long int method(vector<vector<int>>&triangle,int i,int j,int &m,int &n,vector<vector<int>>&dp)
//     {
//         if(i>=m)
//           return INT_MAX;
//         if(i==m-1)
//           return triangle[i][j];
//         if(dp[i][j]!=-1)
//           return dp[i][j];
//         return dp[i][j]=triangle[i][j]+min(method(triangle,i+1,j,m,n,dp),method(triangle,i+1,j+1,m,n,dp));
//     }
//     int minimumTotal(vector<vector<int>>& triangle) 
//     {
//         int m=triangle.size();
//         int n=triangle[m-1].size();
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         //recursion based approach
//         return method(triangle,0,0,m,n,dp);
//     }
// };

//tabular

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int>dp(n, 0);
        for(int i = 0; i<n; i++){
            dp[i] = triangle[n-1][i];
        }

        for(int row = n-2; row>=0; row--){
            for(int i = 0; i<=row; i++){
                dp[i] = triangle[row][i] + min(dp[i], dp[i+1]);
            }
        }
        return dp[0];
    }
};
