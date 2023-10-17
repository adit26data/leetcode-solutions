class Solution {
public:
    void solve(int sr,int sc,int &er,int &ec,int &m,int &n,int &ans,vector<vector<int>> &g,int k){
        if(sr<0||sc<0||sr>=m||sc>=n||g[sr][sc]==3||g[sr][sc]==-1){
            return;
        }
        if(sr==er&&sc==ec){
            if(k==-1)
            ans++;
            return;
        }
        g[sr][sc] = 3;
        solve(sr+1,sc,er,ec,m,n,ans,g,k-1);
        solve(sr,sc+1,er,ec,m,n,ans,g,k-1);
        solve(sr-1,sc,er,ec,m,n,ans,g,k-1);
        solve(sr,sc-1,er,ec,m,n,ans,g,k-1);
        g[sr][sc] = 0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int i = 0, j = 0, m = grid.size(), n = grid[0].size(),sr,sc,er,ec,k=0;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                if(grid[i][j]==1){
                    sr = i;
                    sc = j;
                }else if(grid[i][j] == 2){
                    er = i;
                    ec = j;
                }else if(grid[i][j]==0){
                    k++;
                }
            }
        }
        int ans = 0;
        solve(sr,sc,er,ec,m,n,ans,grid,k);
        return ans;
    }
};
