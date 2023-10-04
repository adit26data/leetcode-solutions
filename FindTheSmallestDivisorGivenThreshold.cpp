int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int minSumFunction(vector<int>&nums,int divisor)
    {
        double sum=0;
        for(int i=0;i<nums.size();i++)
                      sum+=ceil(nums[i]/(1.0*divisor));
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
       int low=1;
       int high=*max_element(nums.begin(),nums.end());
       int minSum=0;
       int mid=0;
       while(low<=high)
       {
           mid=(low+high)/2;
           if(minSumFunction(nums,mid)<=threshold)
             high=mid-1;
           else
             low=mid+1;
       }
       return low;
    }
};
