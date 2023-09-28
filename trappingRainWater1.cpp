int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int trap(vector<int>& height) 
    {
        //linear approach
        vector<int>maxLeft;
        vector<int>maxRight(height.size(),0);
        int ml=0;
        int mr=0;
        int water=0;
        for(int i=0,j=height.size()-1;i<height.size() && j>=0;i++,j--)
        {
            maxLeft.push_back(ml);
            ml=max(ml,height[i]);
            maxRight[j]=mr;
            mr=max(mr,height[j]);
        }
        for(int i=0;i<height.size();i++)
        {
            int temp=min(maxLeft[i],maxRight[i])-height[i];
            if(temp<0)
               continue;
            else
               water+=temp;
        }
        return water;


        //two pointer approach
        // int left=0;
        // int right=height.size()-1;
        // int leftMax=height[left];
        // int rightMax=height[right];
        // int res=0;
        // while(left<right)
        // {
        //     if(leftMax<rightMax)
        //     {
        //         left++;
        //         leftMax=max(leftMax,height[left]);
        //         res+=leftMax-height[left];
        //     }
        //     else
        //     {
        //         right--;
        //         rightMax=max(rightMax,height[right]);
        //         res+=rightMax-height[right];
        //     }
        // }
        // return res;


        
    }
};
