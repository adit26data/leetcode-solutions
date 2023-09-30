int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        if(nums.size()==-1)
        {
            if(nums[0]==target)
              return 0;
            else
              return -1;
        }
        int mid=(nums.size()-1)/2;
        if(nums[mid]==target)
          return mid;
        for(int i=1;i<=mid;i++)
            {
                if(nums[mid+i]==target && mid+i<=nums.size()-1)
                  return mid+i;
                else if(nums[mid-i]==target && mid-i>=0)
                   return mid-i;
            }
            if(nums[nums.size()-1]==target)
              return nums.size()-1;
         return -1;

        
    }
};
