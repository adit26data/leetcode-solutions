class Solution {
public:
    void sum(vector<vector<int>>&ans,vector<int>&candidates,vector<int>&r,int index,int target)
    {
        if(target==0)
         {
                  ans.push_back(r);
                  return;
         }   
        int x=index;       
        while(index<candidates.size() && target-candidates[index]>=0)
        {
            if(index>x && candidates[index]==candidates[index-1])
            {
                index++;
                continue;
            }
            r.push_back(candidates[index]);
            sum(ans,candidates,r,index+1,target-candidates[index]);
            index+=1;
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>r;
        sum(ans,candidates,r,0,target);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
