int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool daysCalculate(vector<int>&weights,int capacity,int d)
    {
        int sum=0;
        int days=1;
        for(int i=0;i<weights.size();i++)
        {
            sum=sum+weights[i];
            if(weights[i]>capacity)
              return false;
            if(sum>capacity)
            {
                days++;
                sum=weights[i];
            }
        }
        if(days<=d)
          return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int high=accumulate(weights.begin(), weights.end(),0);
        int low=1;
        int mid=0;
        int sum=high;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(daysCalculate(weights, mid, days))
              {
                  sum=mid;
                  high=mid-1;
              }
            else
              low=mid+1;
        }
        return sum;
        
    }
};
