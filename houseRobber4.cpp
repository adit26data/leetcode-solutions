int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int method(int i,int mid,vector<int>&nums,int n,vector<int>&dp)
    {
        if(i>=n)
          return 0;
        if(dp[i]!=-1)  return dp[i];
        int p=0;
        if(nums[i]<=mid)
            p=1+method(i+2,mid,nums,n,dp);
        int np=method(i+1,mid,nums,n,dp);
        return dp[i]=max(p,np);
    }
    int minCapability(vector<int>& nums, int k) 
    {
       int n = nums.size();
       int maxi = -1e9, mini = 1e9;
      for(int i=0;i<n;i++){
          mini = min(mini,nums[i]);
          maxi = max(maxi,nums[i]);
      }
        int ans=0;
        int low=mini;
        int high=maxi;
        while(low<=high)
        {
            int mid=(low+high)/2;
            vector<int>dp(n,-1);
            int p=method(0,mid,nums,n,dp);
            if(p>=k)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
        }
        return ans;
    }
};
