class Solution {
public:
    char findTheDifference(string s, string t) 
    {
      //brute force
      // for(int i=0;i<t.size();i++)
      // {
      //   int count1=count(s.begin(), s.end(),t[i]);
      //   int count2=count(t.begin(), t.end(),t[i]);
      //   if(count1!=count2)
      //      return t[i];
      // }
      // return ' ';


      //optimised-3ms
      // sort(s.begin(),s.end());
      // sort(t.begin(),t.end());
      // int x=0,y=0;
      // for(int i=0;i<s.size();i++)
      // {
      //   x=x^s[i];
      //   y=y^t[i];
      //   if(x!=y)
      //      return t[i];
      // }
      // if(x==y)
      //    return t[t.size()-1]; 
      // else
      //   return ' ';

      //optimised-buffer
      // char res = 0;
      // for(char &ch : t) res ^= ch;
      // for(char &ch : s) res ^= ch; 
      //   return res;


      //optimised-best
      for(int i = 0; i < s.size(); i++) t[i+1] += t[i] - s[i];
        return t[t.size()-1];
    }
};
