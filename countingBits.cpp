static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
class Solution {
public:
    vector<int> countBits(int n) 
    {
      vector<int>ans;
      for(int i=0;i<=n;i++)
      {
        bitset<32>binary(i);
        ans.push_back(binary.count());
      }
      return ans;

        
    }
};
