int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int m=*max_element(piles.begin(),piles.end());
        int low=1;
        int high=m;
        long long int sum=0;
        int ans=0;
        while(low<=high)
        {
            sum=0;
            long long int mid=(low+high)/2;
            for(int i=0;i<piles.size();i++)
                 sum+=ceil(double(piles[i])/double(mid));
            if(sum<=h)
                    high=mid-1;
            else
               low=mid+1;  
        }
        return low;
        
    }
};
