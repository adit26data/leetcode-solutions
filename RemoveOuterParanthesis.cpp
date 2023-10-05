int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        //brute force approach using stack
        // stack<pair<char,int>>stk;
        // string ans="";
        // int count=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='(')
        //     {
        //         stk.push({s[i],i});
        //     }
        //     if(s[i]==')')
        //     {
        //         if(stk.size()!=1)
        //             stk.pop();
        //         else
        //         {
        //             pair<char,int>temp=stk.top();
        //             ans=ans+s.substr(temp.second+1, i-temp.second-1);
        //             stk.pop();
        //         }
        //     }
        // }
        // return ans;

        //optimised approach
        int count=0;
        string ans="";
        for(auto i:s)
        {
            if(i=='(' && count++>0)
                ans+=i;
            if(i==')' && count-- > 1)
               ans+=i;
        }
        return ans;
    }
};
