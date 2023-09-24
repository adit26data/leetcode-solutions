//solution-1
class Solution{
    public:
    void solve(vector<string>& sol, vector<vector<int>>& m, vector<vector<int>>& ans, string a, int n, int row, int col) {
        if (row == n - 1 && col == n - 1) {
            sol.push_back(a);
            return;
        }
        
        // Check boundaries before accessing elements in the matrix
        // downward
        if (row + 1 < n && m[row + 1][col] == 1 && !ans[row + 1][col]) {
            ans[row][col] = 1;
            solve(sol, m, ans, a + 'D', n, row + 1, col);
            ans[row][col] = 0;
        }
        
        // upward
        if (row - 1 >= 0 && m[row - 1][col] == 1 && !ans[row - 1][col]) {
            ans[row][col] = 1;
            solve(sol, m, ans, a + 'U', n, row - 1, col);
            ans[row][col] = 0;
        }
        
        // left
        if (col - 1 >= 0 && m[row][col - 1] == 1 && !ans[row][col - 1]) {
            ans[row][col] = 1;
            solve(sol, m, ans, a + 'L', n, row, col - 1);
            ans[row][col] = 0;
        }
        
        // right
        if (col + 1 < n && m[row][col + 1] == 1 && !ans[row][col + 1]) {
            ans[row][col] = 1;
            solve(sol, m, ans, a + 'R', n, row, col + 1);
            ans[row][col] = 0;
        }
    }

    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> sol;
        if(m[0][0]==0)
          return {"-1"};
        vector<vector<int>> ans(n, vector<int>(n, 0)); // Initialize ans matrix
        string a = "";
        int row = 0, col = 0;
        solve(sol, m, ans, a, n, row, col);
        sort(sol.begin(), sol.end());
        return sol;
    }
};



//solution-2
class Solution{
    public:
    void solve(vector<string>& sol, vector<vector<int>>& m, vector<vector<int>>& ans, string a, int n, int row, int col,int di[],int dj[]) {
        if (row == n - 1 && col == n - 1) {
            sol.push_back(a);
            return;
        }
        
        string dir="DLRU";
        for(int i=0;i<n;i++)
        {
            int nexti=row+di[i];
            int nextj=col+dj[i];
            if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && ans[nexti][nextj]==0 && m[nexti][nextj]==1)
            {
                ans[row][col]=1;
                solve(sol,m,ans,a+dir[i],n,nexti,nextj,di,dj);
                ans[row][col]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> sol;
        vector<vector<int>> ans(n, vector<int>(n, 0)); // Initialize ans matrix
        string a = "";
        int row = 0, col = 0;
        int di[]={+1,0,0,-1};
        int dj[]={0,-1,1,0};
        solve(sol, m, ans, a, n, row, col,di,dj);
        sort(sol.begin(), sol.end());
        return sol;
    }
};

    
