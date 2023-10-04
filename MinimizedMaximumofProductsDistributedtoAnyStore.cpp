int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) 
    {
        int low=1;
        int high=*max_element(quantities.begin(), quantities.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            double sum=0;
            for(int i=0;i<quantities.size();i++)
              sum=sum+ceil(double(quantities[i])/double(mid));
            if(sum<=n)
              high=mid-1;
            else if(sum>n)
             low=mid+1;
        }
        return low;
        
    }
};
