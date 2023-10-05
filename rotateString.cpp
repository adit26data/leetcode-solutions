class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        //brute force approach
        // int count=0;
        // while(count!=s.size())
        // {
        //     if(s.compare(goal)==0)
        //        return true;
        //     char ch=s.front();
        //     s=s.substr(1)+ch;
        //     count++;
        // }
        // return false;
        if(s.size()!=goal.size())
          return false;
        string str=s+s;
        int n=s.size();
        for(int i=0;i<str.size();i++)
        {
            string temp=str.substr(i,n);
            if(temp.compare(goal)==0)
              return true;
        }
        return false;



        
    }
};
