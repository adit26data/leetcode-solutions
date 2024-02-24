class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) 
    {
        vector<bool>meet(n);
        meet[0] = meet[firstPerson] = true;
        map<int,vector<pair<int,int>>>mp;
        for(auto meeting:meetings)
           mp[meeting[2]].push_back({meeting[0],meeting[1]});
        //iterate in meetings and create graph
        for(auto &[k,v] : mp)
        {
         unordered_map<int,vector<int>>graph;
         unordered_set<int>st;
         for(auto &[x,y]:v)
         {
             graph[x].push_back(y);
             graph[y].push_back(x);
             if(meet[x])
                st.insert(x);
            if(meet[y])
              st.insert(y);
         }
         queue<int>q;
         for(auto &x:st)
            q.push(x);
         while(q.size())
         {
             auto x = q.front();
             q.pop();
             for(auto&y:graph[x])
             {
                 if(meet[y]==false)
                {
                    meet[y] = true;
                    q.push(y);
                }
             }
         }
        }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(meet[i]) 
           ans.push_back(i);
    }
    return ans;
        
    }
};

//https://leetcode.com/problems/find-all-people-with-secret/description/
