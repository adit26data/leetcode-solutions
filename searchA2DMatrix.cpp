int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            int lb=lower_bound(matrix[i].begin(), matrix[i].end(),target)-matrix[i].begin();
            if(0<=lb && lb<matrix[i].size() && matrix[i][lb]==target)
              return true;
        }
        return false;

        
    }
};
