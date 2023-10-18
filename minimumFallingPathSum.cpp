int speed_up=[]{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     return 0;
 }();
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(), maxi=INT_MAX;
        vector<vector<int>>dp(n, vector<int>(n, 0));
        for(int i=0; i<n; i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                int l=INT_MAX, m=dp[i-1][j]+matrix[i][j], r=INT_MAX;
                if(j>0){l=dp[i-1][j-1]+matrix[i][j];}
                if(j<n-1){r=dp[i-1][j+1]+matrix[i][j];}
                dp[i][j]=min({l, m, r});
            }
        }
        for(int i=0; i<n; i++){
            maxi=min(maxi, dp[n-1][i]);
        }
        return maxi;
    }
};
