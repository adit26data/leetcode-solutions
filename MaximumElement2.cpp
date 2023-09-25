class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        //brute force approach
        // int count=0;
        // vector<int>res;
        // for(int i=0;i<nums.size();i++)
        // {
        //     count=0;
        //     for(int j=0;j<nums.size();j++)
        //     {
        //         if(nums[i]==nums[j])
        //           count++;
        //     }
        //     if(count>nums.size()/3 && find(res.begin(), res.end(), nums[i])==res.end())
        //       res.push_back(nums[i]);  
        // }
        // return res;

        // //buffer approach using maps/hashing method
        unordered_map<int,int>m;
        vector<int>res;
        for(auto i:nums)
          m[i]++;
        for(auto it:m)
        {
            if(it.second>nums.size()/3)
              res.push_back(it.first);
        }
        return res;

        //optimal approach using moore voting algorithm extended
        // int count1=0;
        // int count2=0;
        // int ele1=-999;
        // int ele2=-999;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(count1==0 && nums[i]!=ele2)
        //     {
        //         count1++;
        //         ele1=nums[i];
        //     }
        //     else if(count2==0 && nums[i]!=ele1)
        //     {
        //         count2++;
        //         ele2=nums[i];
        //     }
        //     else if(ele1==nums[i])
        //       count1++;
        //     else if(ele2==nums[i])
        //       count2++;
        //     else
        //     {
        //         count1--;
        //         count2--;
        //     }
        // }
        // count1=0;
        // count2=0;
        // vector<int>res;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(ele1==nums[i])
        //            count1++;
        //     if(ele2==nums[i])
        //         count2++; 
        // }
        // if(count1>nums.size()/3)
        //        res.push_back(ele1);
        // if(count2>nums.size()/3)
        //     res.push_back(ele2);
        
        // return res;
        
    }
};
