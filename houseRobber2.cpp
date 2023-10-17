int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int method(vector<int>num)
    {
      int n=num.size();
        vector<int>dp(n,-1);
        //using tabulation way
        dp[0]=num[0];
        for(int i=1;i<n;i++)
        {
            int p=num[i];
            if(i>1)
              p+=dp[i-2];
            int np=0+dp[i-1];
            dp[i]=max(p,np);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) 
    {

        if(nums.size()==1)
          return nums[0];
        int n=nums.size();
        vector<int>temp1,temp2;
        for(int i=0;i<n;i++)
        {
          if(i!=0)
            temp1.push_back(nums[i]);
          if(i!=n-1)
            temp2.push_back(nums[i]);
        }
        return max(method(temp1),method(temp2));
        
        
    }
};
