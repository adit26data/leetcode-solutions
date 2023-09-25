class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        //variety 2 for not equal no of positives and negaties. Brute force approach. Beats 89% close to 905 for optimal one.
        // vector<int>temp1;
        // vector<int>temp2;
        // vector<int>ans;
        // for(auto i:nums)
        // {
        //     if(i<0)
        //        temp2.push_back(i);
        //     else
        //       temp1.push_back(i);
        // }
        // int i;
        // for(i=0;i<min(temp1.size(),temp2.size());i++)
        // {
        //         ans.push_back(temp1[i]);
        //         ans.push_back(temp2[i]);
        // }
        // while(i!=temp1.size())
        //    ans.push_back(temp1[i++]);
        // while(i!=temp2.size())
        //    ans.push_back(temp2[i++]);
        // return ans;

        int pos=0;
        int neg=1;
        vector<int>ans(nums.size(),0);
        for(auto i:nums)
        {
            if(i<0)
              {
                  ans[neg]=i;
                  neg+=2;
              }
            else
            {
                ans[pos]=i;
                pos+=2;
            }
        }
        
        return ans; 
    }
};
