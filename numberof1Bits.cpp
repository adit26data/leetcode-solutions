static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int count=0;
        
        while(n!=0)
        {
            int d=n%2;
            count+=d;
            n=n/2;
        }
        return count;
        
    }
};
