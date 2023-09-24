/*You are given a binary string s that contains at least one '1'.

You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.

 

Example 1:

Input: s = "010"
Output: "001"
Explanation: Because there is just one '1', it must be in the last position. So the answer is "001".
Example 2:

Input: s = "0101"
Output: "1001"
Explanation: One of the '1's must be in the last position. The maximum number that can be made with the remaining digits is "100". So the answer is "1001".*/
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
class Solution {
public:
     
    string maximumOddBinaryNumber(string s) 
    {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                  count++;
        }
        string s1="";
        if(count==1)
        {
            for(int i=0;i<s.size()-1;i++)
                  s1+='0';
           s1=s1+'1';
        }
        else
        {
            for(int i=0;i<count-1;i++)
                   s1=s1+'1';
            for(int i=0;i<s.size()-count;i++)
                   s1=s1+'0';
            s1=s1+'1';
        }
    return s1;
        
    }
};


  
