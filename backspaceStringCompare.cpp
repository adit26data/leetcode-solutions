int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        //O(n) time and 0(n) space - 100% beats
        // stack<char>st,sr;
        // for(auto i:s)
        // {
        //     if(i=='#' && st.empty()==false)
        //       st.pop();
        //     else if(i=='#' && st.empty())
        //       continue;
        //     else
        //      st.push(i);
        // }
        // int count1=st.size();
        // for(auto i:t)
        // {
        //     if(i=='#' && sr.empty()==false)
        //       sr.pop();
        //     else if(i=='#' && sr.empty())
        //       continue;
        //     else
        //       sr.push(i);
        // }
        // int count2=sr.size();
        // if(count1!=count2)
        //   return false;
        // else
        // {
        //     while(!st.empty())
        //     {
        //         if(st.top()!=sr.top())
        //           return false;
        //         st.pop();
        //         sr.pop();
        //     }
        // return true;
        // }


        //O(n) and O(1) solution using two pointers
        int i=0;
        int j=0;
        while(s.find('#')!=string::npos || t.find('#')!=string::npos)
        {
            if(s[i]!='#')
              i++;
            if(t[j]!='#')
              j++;
            if(s[i]=='#')
            {
                if(i-1<0)
                   s.erase(i,1);
                else if(i+1>=s.size())
                   s.erase(i-1,2);
                else
                {
                    s[i-1]=s[i+1];
                    s.erase(i,2);
                    i=i-1;
                }
                cout<<s<<"@"<<i<<endl;
               
                
            }
            if(t[j]=='#')
            {
                if(j-1<0)
                   t.erase(j,1);
                else if(j+1>=t.size())
                   t.erase(j-1,2);
                else
                {
                t[j-1]=t[j+1];
                t.erase(j,2);
                j=j-1;
                }
            cout<<t<<"$"<<j<<endl;
            }
        }
        if(s.size()!=t.size())
          return false;
        else
        {
            for(i=0;i<s.size();i++)
            {
                if(s[i]!=t[i])
                  return false;
            }
            return true;
        }

    }
};
