class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // unordered_map<int,int>m;
        // vector<int>result;
        // for(int i=0;i<nums.size();i++)
        // {
        //     auto c=target-nums[i];
        //     if(m.find(c)!=m.end())
        //     {
        //         result.push_back(m[c]);
        //         result.push_back(i);
        //     }
        //     else
        //        m.insert({nums[i],i});
        // }
        // return result;
        
        int sum=0;
        vector<pair<int,int>>temp;
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back({nums[i],i});
        }
        int i=0,j=nums.size()-1;
        sort(temp.begin(), temp.end());
        while(i<=j)
        {
            sum=temp[i].first+temp[j].first;
            if(target==sum)
              return {temp[i].second,temp[j].second};
            else if(target>sum)
               i++;
            else
              j--;
        }
    return {};
    }
};
