class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
       int uc=matrix[0].size()-1;
       int ur=matrix.size()-1;
       int lc=0;
       int lr=0;
       int count=0;
       vector<int>ans;
       char direction='r';
       int i=0,j=0;
       while(count!=matrix.size()*matrix[0].size())
       {
           count++;
           ans.push_back(matrix[i][j]);
           if(direction=='r')
           {
               if(j==uc)
                  {
                      i++;
                      direction='d';
                      lr++;
                  }
                else
                    j++;     
           }
           else if(direction=='d')
           {
               if(i==ur)
               {
                   j--;
                   direction='l';
                   uc--;
               }
               else
                 i++;
           }
           else if(direction=='l')
           {
               if(j==lc)
               {
                   i--;
                   direction='u';
                   ur--;
               }
               else
                 j--;
           }
           else if(direction=='u')
           {
               if(i==lr)
               {
                   j++;
                   direction='r';
                   lc++;
               }
               else
                  i--;
           } 
       }
       return ans;
    }
};
