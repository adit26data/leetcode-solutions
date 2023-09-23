class Solution {
public:
   void permute2(vector<vector<int>>&v, vector<int>&r, vector<int>&nums,int size)
   {
       if(r.size()==size)
       {
           v.push_back(r);
           return;
       }
       for(int i=0;i<nums.size();i++)
       {
           if(find(r.begin(), r.end(),nums[i])!=r.end())
              continue;
            r.push_back(nums[i]);
            permute2(v,r,nums,size);
            r.pop_back();
       }
   }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>v;
        vector<int>r;
        permute2(v,r,nums,nums.size());
        return v;

    }
};
