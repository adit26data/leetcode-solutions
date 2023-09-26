class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
        int i=0,j=0,k=0,l=0;
        vector<vector<int>>ans;
        for(i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
              continue;
            for(j=i+1;j<nums.size();j++)
            {
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                k=j+1;
                l=nums.size()-1;  
                while(k<l)
                {
                 long sum=long(nums[i])+long(nums[j])+long(nums[k])+long(nums[l]);
                 if(sum==target)
                 {
                  ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                  k++;
                  l--;
                  while(k<l && nums[k]==nums[k-1])
                     k++;
                  while(k<l && nums[l]==nums[l+1])
                      l--;
                }
                else if(sum<target)
                   k++;
                else
                 l--;
            }
            }
        }
    return ans;
    }
};
