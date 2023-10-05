int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    string largestOddNumber(string num)
     {
         int ind=-1;
         for(int i=num.size()-1;i>=0;i--)
         {
           if((num[i]-'0')%2!=0)
           {
             ind=i;
             break;
           }
         }
         if(ind==-1)
           return "";
         string ans="";
         for(int i=0;i<=ind;i++)
           ans+=num[i];
        return ans;    
    }
};
