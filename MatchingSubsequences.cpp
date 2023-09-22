bool isSubsequence(string s1, string s2, int m, int n)
    {
       int j = 0;
        for(int i = 0; i < m && j < n; i++){
            if(s1[i] == s2[j]) j++;
        }
        return j == n;
    }
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int count=0;
        map<string,bool>m;
        for(auto x:words)
        {
            if(m.find(x)!=m.end())
            {
                if(m[x]==true)
                   count++;
                continue;
            }
           m[x]=isSubsequence(s, x, s.size(), x.size());
           if(m[x]==true)
              count++;
        }
        return count;
        
    }
