class Solution {
public:
    bool isPal(string s,int index,int j)
    {
        while(index<=j)
        {
            if(s[index++]!=s[j--])
              return false;
        }
        return true;
    }
    void permute(vector<vector<string>>&ans, vector<string>&r, string s, int index)
    {
        if(index==s.size())
        {
            ans.push_back(r);
            return;
        }
        for(int i=index;i<=s.size()-1;++i)
        {
            if(isPal(s,index,i))
            {
                r.push_back(s.substr(index,i-index+1));
                permute(ans,r,s,i+1);
                r.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>>ans;
        vector<string>r;
        permute(ans,r,s,0);
        return ans;
        
    }
};
