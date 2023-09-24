class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
      // k=k%nums.size();
      //  vector<int>temp;
      //  for(int i=1;i<=k;i++)
      //  {
      //      int t=nums.back();
      //      temp.push_back(t);
      //      nums.pop_back();
      //  }
      //  reverse(temp.begin(), temp.end());
      //  nums.insert(nums.begin(),temp.begin(), temp.end());
      
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};
