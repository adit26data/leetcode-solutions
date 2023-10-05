int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        //brute force approach
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s.size()!=t.size())
        //   return false;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]!=t[i])
        //       return false;
        // }
        // return true;


        //better solution
        unordered_map<char,int>sm;
        if(s.size() != t.size()){
            return false;
        }
        for(auto i:s)
           sm[i]++;
        for(auto i:t)
           sm[i]--;
        for(auto it=sm.begin();it!=sm.end();++it)
           if(it->second!=0)
              return false;
        return true;
        
    }
};
