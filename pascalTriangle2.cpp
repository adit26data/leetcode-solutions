// class Solution {
// public:
//     vector<int> getRow(int rowIndex) 
//     {
//         long long int ans=1;
//         vector<int>r;
//         r.push_back(1);
//         rowIndex+=1;
//         for(int i=1;i<rowIndex;i++)
//         {
//             ans=ans*(rowIndex-i);
//             ans=ans/i;
//             r.push_back(ans);
//         }
//         return r;
        
//     }
// };

class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<int>res;
      long long factor = 1 ;
      for(int i = 0 ; i <= rowIndex ; i++){
        res.push_back(factor);
        factor = factor * (rowIndex - i)/(i+1);
      }
      return res;

    }
};
