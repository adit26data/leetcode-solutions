static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
class Solution {
public:
    void permute(vector<vector<int>>&ans, vector<int>&r, vector<int>&nums, vector<int>&pos, int size)
    {
        if(r.size()==size)
        {
            ans.push_back(r);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(find(pos.begin(), pos.end(), i)!=pos.end())
               continue;
            r.push_back(nums[i]);
            pos.push_back(i);
            permute(ans,r,nums,pos,size);
            r.pop_back();
            pos.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>r;
        vector<int>pos;
        permute(ans,r,nums,pos,nums.size());
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
        
    }
};



//more effecient solution

// class Solution {
// public:
//     void recursion(vector<int> num, int i, int n, vector<vector<int> > &result) {
//         if(i == n-1){
//             result.push_back(num);
//             return;
//         }

//         for(int k = i; k < n; k++){
//             if(k != i && num[k] == num[i]) continue;

//             swap(num[k], num[i]);
//             recursion(num, i+1, n, result);
//         }
//     }
//     vector<vector<int> > permuteUnique(vector<int> &num) {
//         sort(num.begin(), num.end());

//         int n = num.size();

//         vector<vector<int>> result;
//         recursion(num, 0, n, result);
        
//         return result;
//     }
// };


// static bool     _foo = ios::sync_with_stdio(false);
// static ostream* _bar = cin.tie(NULL);
// class Solution {
// public:
//     void permute(vector<vector<int>>&ans, vector<int>&nums, int pos, int size)
//     {
//        if(pos==size-1)
//        {
//            ans.push_back(nums);
//            return;
//        } 
//        for(int i=pos;i<size;i++)
//        {
//            if(i != pos && nums[i] == nums[pos]) continue;
//            swap(nums[pos],nums[i]);
//            permute(ans,nums,pos+1,size);
//        }
//     }
//     vector<vector<int>> permuteUnique(vector<int>& nums) 
//     {
//         vector<vector<int>>ans;
//         sort(nums.begin(), nums.end());
//         int pos=0;
//         permute(ans,nums,pos,nums.size());
//         // sort(ans.begin(), ans.end());
//         // ans.erase(unique(ans.begin(), ans.end()), ans.end());
//         return ans;
        
//     }
// };

// class Solution {
// public:
//     void recursion(vector<int> nums, int i, int n, vector<vector<int> > &result) {
//         if(i == n-1){
//             result.push_back(nums);
//             return;
//         }

//         for(int k = i; k < n; k++){
//             if(k != i && nums[k] == nums[i]) continue;

//             swap(nums[k], nums[i]);
//             recursion(nums, i+1, n, result);
//         }
//     }
//     vector<vector<int> > permuteUnique(vector<int> &nums) {
//         sort(nums.begin(), nums.end());

//         int n = nums.size();

//         vector<vector<int>> result;
//         recursion(nums, 0, n, result);
        
//         return result;
//     }
// };
