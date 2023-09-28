int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i=0;
        int j=height.size()-1;
        long long int diff=0;
        long long int m=INT_MIN;
        long long int area=0;
        long long int l=0;
        while(i<j)
        {
                diff=j-i;
                l=min(height[i],height[j]);
                area=diff*l;
                m=max(m,area);
                if(height[i]<height[j])
                   i++;
                else
                   j--;
        }
        return m;
        
    }
};
