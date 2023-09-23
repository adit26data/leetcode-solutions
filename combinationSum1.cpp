class Solution {
public:
    void operations(vector<vector<int>>&ans, int index, int target, vector<int>&candidates,vector<int>&r)
    {
        if(target==0)
             ans.push_back(r);
       while(index<candidates.size()&&target-candidates[index]>=0)
       {
           r.push_back(candidates[index]);
           operations(ans,index, target-candidates[index],candidates,r);
           ++index;
           r.pop_back();
       }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(), candidates.end()),candidates.end());
        vector<vector<int>>ans;
        vector<int>r;
        operations(ans,0,target,candidates,r);
        return ans;
    }
};


