int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        if(nums.size()==1)
           return nums[0];
        if(nums.size()==2)
          return min(nums[0],nums[1]);
        int n=nums.size();
        int mid=(n-1)/2;
        int m=INT_MAX;
        for(int i=0;i<=mid;i++)
        { 
            if(mid+i<=n-1 && mid-i>=0)
                m=min(m,min(nums[mid+i],nums[mid-i]));     
        }
        if(nums.size()%2==0)
           m=min(m,nums[n-1]);
        return m;
    }
};
