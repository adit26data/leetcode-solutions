class Solution {
public:
    void merge(vector<int>&nums, int low,int mid,int high)
    {
        int left=low;
        int right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high)
        {
            if(long(nums[left])<=long(nums[right]))
            {
                temp.push_back(nums[left]);
                left++;
            }
            else
              {
                  temp.push_back(nums[right]);
                  right++;
              }
        }
        while(left<=mid)
           temp.push_back(nums[left++]);
        while(right<=high)
          temp.push_back(nums[right++]);
        for(int i=low;i<=high;i++)
          nums[i]=temp[i-low];
        
    }
    int countPairs(vector<int>&nums,int low,int mid,int high)
    {
        int right=mid+1;
        int count=0;
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && long(nums[i])>2*long(nums[right]))
                 right++;
            count+=(right-(mid+1));
        }
        return count;
    } 
    int mergeSort(vector<int>&nums, int low,int high)
    {
        int cnt=0;
        if(low>=high)
          return cnt;
        int mid=(low+high)/2;
        cnt+=mergeSort(nums,low,mid);
        cnt+=mergeSort(nums,mid+1,high);
        cnt+=countPairs(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) 
    {
       return mergeSort(nums,0,nums.size()-1);
    }
};
