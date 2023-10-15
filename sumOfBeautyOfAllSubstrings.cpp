int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int beautySum(string s) 
    {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++)
            {
                mp[s[j]]++;
                int maxFreq=0;
                int minFreq=INT_MAX;
                for(auto it:mp)
                {
                    maxFreq=max(maxFreq,it.second);
                    minFreq=min(minFreq,it.second);
                }
                sum+=(maxFreq-minFreq);
            }
        }
        return sum;
       
    }
};
