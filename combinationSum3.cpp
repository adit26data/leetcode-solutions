class Solution {
public:
    void sum(vector<vector<int>>&ans, vector<int>&candidates,vector<int>&r,int index,int k,int n)
    {
        if(n==0 && r.size()==k)
        {
            ans.push_back(r);
            return;
        }
        while(n-candidates[index]>=0 && index<candidates.size())
        {
            r.push_back(candidates[index]);
            sum(ans,candidates,r,index+1,k,n-candidates[index]);
            index+=1;
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<int>candidates;
        for(int i=1;i<=9;i++)
           candidates.push_back(i);
        vector<vector<int>>ans;
        vector<int>r;
        sum(ans,candidates,r,0,k,n);
        return ans;
    }
};
