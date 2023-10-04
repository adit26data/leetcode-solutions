int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        //brute force
        // int count=0;
        // for(int i=1;i<=INT_MAX;i++)
        // {
        //     if(find(arr.begin(), arr.end(),i)==arr.end())
        //           count++;
        //     if(count==k)
        //       return i;
        // }
        // return -1;

        //buffer approach
        // unordered_map<int,int>mp;
        // for(auto i:arr)
        //   mp[i]++;
        // int number=1;
        // int ans=0;
        // while(k!=0)
        // {
        //      if(mp.find(number)==mp.end())
        //       {
        //           ans=number;
        //           k--;
        //       }
        //       number++;
        // }
        // return ans;

        //optimises one
        for(int i=0;i<arr.size();i++){
            if(arr[i] <= k){
                k++;
            }
            else break;
        }

        return k;

        
    }
};
