class Solution {
public:
//for memoization
    // int method(vector<int> &dp,int index,vector<int>&nums)
    // {
    //     if(index==0)
    //       return nums[0];
    //     if(index<0)
    //       return 0;
    //     if(dp[index]!=-1)
    //       return dp[index];
    //     int p=nums[index]+method(dp,index-2,nums);
    //     int np=0+method(dp,index-1,nums);
    //     return dp[index]=max(p,np);
    // }
    int rob(vector<int>& nums) 
    {
        
        int n=nums.size();
        vector<int>dp(n,-1);

        //using tabulation way
        dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            int p=nums[i];
            if(i>1)
              p+=dp[i-2];
            int np=0+dp[i-1];
            dp[i]=max(p,np);
        }
        return dp[n-1];
        
        
    }
};
