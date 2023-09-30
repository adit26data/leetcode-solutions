int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int lb=lower_bound(nums.begin(), nums.end(),target)-nums.begin();
        return lb;
        
    }
};
