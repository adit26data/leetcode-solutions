int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        // for(auto i:nums)
        // {
        //     int lb=lower_bound(nums.begin(),nums.end(),i)-nums.begin();
        //     int ub=upper_bound(nums.begin(),nums.end(),i)-nums.begin();
        //     if(ub-lb==1)
        //        return i;
        // }
        // return -1;
        int n=nums.size();
        if (n == 1) return nums[0];
         if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
        int low=1;
        int high=nums.size()-2;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
              return nums[mid];
            //for left half
            if(nums[mid]==nums[mid-1] && mid%2==1 || nums[mid]==nums[mid+1] && mid%2==0)
                low=mid+1;
            else
               high=mid-1;
        }
        return -1;
    }
};
