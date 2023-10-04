class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int i=0;
        int j=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            j=i+1;
            while(j<nums.size())
            {
                if(nums[i]==nums[j])
                  count++;
                j++;
            }
        }
        return count;
        
    }
};
