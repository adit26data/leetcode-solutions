class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        // vector<vector<int>>mat;
        // vector<int>temp;
        // for(int i=0;i<matrix.size();i++)
        // {
        //     for(int j=0;j<matrix.size();j++)
        //        temp.push_back(matrix[j][i]);
        //     reverse(temp.begin(),temp.end());
        //     mat.push_back(temp);
        //     temp.clear();
        // }
        // matrix=mat;

        int k=0;
        for(int i=k;i<matrix.size();i++)
        {
            for(int j=k;j<matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        k++;
        reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
