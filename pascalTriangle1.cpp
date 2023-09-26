class Solution {
public:
    vector<int>rowGenerate(int row)
    {
        long long ans=1;
        vector<int>r;
        r.push_back(1);
        for(int i=1;i<row;i++)
        {
            ans=ans*(row-i);
            ans=ans/i;
            r.push_back(ans);
        }
        return r;
    }
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
           ans.push_back(rowGenerate(i));
        
    return ans;
       
        
    }
};
