int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int countSize(vector<int>&nums,int k)
    {
        int sizes=1;
        long long sizeTemp=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sizeTemp+nums[i]<=k)
               sizeTemp+=nums[i];
            else
            {
                sizes++;
                sizeTemp=nums[i];
            }
        }
        return sizes;
    }
    int splitArray(vector<int>& nums, int k) 
    {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int sizes=countSize(nums,mid);
            if(sizes>k)
              low=mid+1;
            else
              high=mid-1;
        }
        return low;
        
    }
};
