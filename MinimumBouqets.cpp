class Solution {
public:
    int computeFlower(vector<int>&bloomDay,int k,int mid)
    {
        int c=0;
        int b=0;
        for(auto i:bloomDay)
        {
            if(i>mid)
              c=0;
            else
            {
                c++;
                if(c>=k)
                {
                    c=0;
                    b++;
                }
            }
        }
        return b;
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        if(long(bloomDay.size()) < long(long(m)*long(k)))
          return -1;
        int maxVal=*max_element(bloomDay.begin(), bloomDay.end());
        int minVal=*min_element(bloomDay.begin(), bloomDay.end());
        int low=minVal;
        int high=maxVal;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int bouquets=computeFlower(bloomDay,k,mid);
            if(bouquets<m)
              low=mid+1;
            else
              high=mid-1;
        }
        return low;
        
        
    }
};
