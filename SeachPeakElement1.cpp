int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        //brute force method
        //  if(nums.size()==1)
        //     return 0;
        //   if(nums.size()==2)
        //     {
        //         int temp=*max_element(nums.begin(), nums.end());
        //         return find(nums.begin(),nums.end(),temp)-nums.begin();
        //     }

        // int ans=0;
        // for(int i=1;i<nums.size()-1;i++)
        // {
        //     if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
        //       return i;
        // }
        // int temp=*max_element(nums.begin(), nums.end());
        // return find(nums.begin(),nums.end(),temp)-nums.begin();

         if(nums.size()==1)
            return 0;
          if(nums[0]>nums[1])
            return 0;
          if(nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;
          int low=1;
          int high=nums.size()-2;
          while(low<=high)
          {
              int mid=(low+high)/2;
              if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
              else if(nums[mid]>nums[mid-1])
                low=mid+1;
              else
                high=mid-1;
          }
        return -1;
    }
};
