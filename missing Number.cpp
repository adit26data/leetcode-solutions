class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        // if(nums.size()==1 && nums[0]==nums.size())
        //   return 0;
        // sort(nums.begin(), nums.end());
        // for(int i=1;i<=nums.size()-1;i++)
        // {
        //     if(nums[i]-nums[i-1]!=1)
        //       return (nums[i]+nums[i-1])/2;
        //     if(nums[i]==nums.size())
        //       return 0;
        // }
        // return nums.size();



        // vector<int>hash(nums.size()+1,-1);
        // for(int i=0;i<nums.size();i++)
        //     hash[nums[i]]=0;
        // for(int i=0;i<hash.size();i++)
        // {
        //     if(hash[i]==-1)
        //        return i;
        // }
        // return 0;


        // int n=nums.size();
        // int sum=(n*(n+1))/2;
        // int s=0;
        // for(auto i:nums)
        //    s+=i;
        // return sum-s;

        int xor1=0;
        int xor2=0;
        for(int i=1;i<=nums.size();i++)
           xor1=xor1^i;
        for(int i=0;i<nums.size();i++)
           xor2=xor2^nums[i];
        return xor1^xor2;





        
    }
};
