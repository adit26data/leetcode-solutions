class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        int count=0;
        unordered_map<int,int> mp;
        for (auto &it1: nums1)
            for (auto &it2:nums2)
                mp[it1+it2]++; 
        
        // Traversing Part 2
        for(auto &it3: nums3)
            for(auto &it4:nums4)
               if(mp.count(0-it3-it4)) count+=mp[0-it3-it4];
        
        return count;


    //     vector<int>nums;
    //     for(int i=0;i<nums1.size();i++)
    //     {
    //         int a[4]={nums1[i],nums2[i],nums3[i],nums4[i]};
    //         nums.insert(nums.end(),a,a+4);
    //     }
    //     int count=0;
    //     sort(nums.begin(), nums.end());
    //     int i=0,j=0,k=0,l=0;
    //     for(i=0;i<nums.size();i++)
    //     {
    //         if(i>0 && nums[i]==nums[i-1])
    //           continue;
    //         for(j=i+1;j<nums.size();j++)
    //         {
    //             if(j!=i+1 && nums[j]==nums[j-1]) continue;
    //             k=j+1;
    //             l=nums.size()-1;  
    //             while(k<l)
    //             {
    //              long sum=long(nums[i])+long(nums[j])+long(nums[k])+long(nums[l]);
    //              if(sum==0)
    //              {
    //               count++;
    //               k++;
    //               l--;
    //               while(k<l && nums[k]==nums[k-1])
    //                  k++;
    //               while(k<l && nums[l]==nums[l+1])
    //                   l--;
    //             }
    //             else if(sum<0)
    //                k++;
    //             else
    //              l--;
    //         }
    //         }
    //     }
    // return count++;
        
    }
};
