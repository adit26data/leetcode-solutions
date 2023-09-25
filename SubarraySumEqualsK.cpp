int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        mp[0]=1;
        int presum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            int remove=presum-k;
            count+=mp[remove];
            mp[presum]+=1;
        }
        return count;
        
    }
};
