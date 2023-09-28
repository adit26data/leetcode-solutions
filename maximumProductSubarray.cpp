int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd=INT_MIN;
        int prod=1;
        for(auto i:nums)
        {
            prod*=i;
            maxProd=max(maxProd,prod);
            if(prod==0)
               prod=1;
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            prod*=nums[i];
            maxProd=max(maxProd,prod);
            if(prod==0)
               prod=1;
        }
        return maxProd;
    }
};
