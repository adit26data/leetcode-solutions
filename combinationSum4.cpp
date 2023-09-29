class Solution {
public:
    // Recursive function to count combinations
    int f(int n, vector<int>& nums, int target, vector<int>& dp) {
        if (target == 0) {
            return 1;
        }
        if (target < 0) {
            return 0;
        }
        if (dp[target] != -1) {
            return dp[target];
        }
        int take = 0;
        for (int j = 0; j < n; ++j) {
            take += f(n, nums, target - nums[j], dp); // Recursively count combinations
        }
        return dp[target] = take;
    }
 
    int combinationSum4(vector<int>& nums, int target) {
 
        vector<int>dp(target+1,-1);
       return f(nums.size(),nums,target,dp);
             
 
    }
};
