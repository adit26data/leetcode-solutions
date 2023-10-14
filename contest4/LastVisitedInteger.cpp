class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) 
    {
        vector<int>vec;
        vector<int>ans;
        int k=0;
        int nums_visited=0;
        int prev_visited=0;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]=="prev")
            {
                prev_visited++;
                if(prev_visited>nums_visited)
                    ans.push_back(-1);
                else
                    ans.push_back(vec[k--]);
                
            }
            else
            {
                prev_visited=0;
                nums_visited++;
                k=nums_visited-1;
                vec.push_back(stoi(words[i]));
            }
        }
        return ans;
        
        
    }
};
