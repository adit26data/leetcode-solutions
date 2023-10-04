int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int A=0;
        int B=0;
        for(int i=1;i<colors.size()-1;i++)
        {
          if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A')
             A++;
           else if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B')
             B++;
        }
        return A>B;
    }
};
