static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
class Solution {
public:
    string minWindow(string s, string t) 
    {
       if(s.size()<t.size())
         return "";
       if(t=="")
          return "";
       if(s.size()==t.size())
       {
             string cp=s;
             sort(s.begin(), s.end());
             sort(t.begin(),t.end());
             for(int i=0;i<s.size();i++)
              {
                  if(s[i]!=t[i])
                     return "";
              }
            return cp;
       }
        unordered_map<char,int>countT;
        unordered_map<char,int>window;
        for(auto c:t)
            countT[c]++;
        int i=0,j=0;
        int have=0;
        int need=countT.size();
        vector<int>res;
        int resLen=INT_MAX;
        for(j=0;j<s.size();j++)
        {
            char c=s[j];
            window[c]++;
            if(countT.find(c)!=countT.end() && window[c]==countT[c])
               have++;
            while(have==need)
            {
               if(j-i+1 < resLen)
               {
                   res.clear();
                   res.push_back(i);
                   res.push_back(j);
                   resLen=j-i+1;
               }
               window[s[i]]--;
               if(countT.find(s[i])!=countT.end() && window[s[i]] < countT[s[i]])
                   have--;
               i++;
            }
        }
        if(res.empty())
          return "";
        return s.substr(res[0],resLen); 
    }
};
