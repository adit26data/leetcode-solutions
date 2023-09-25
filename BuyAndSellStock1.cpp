int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buy=0;
        int sell=1;
        int maxprofit=0;
        int profit=0;
        while(sell!=prices.size())
        {
            if(prices[buy]>prices[sell])
            {
                     buy=sell;
                     sell++;
            }
            else if(prices[buy]<prices[sell])
            {
                profit=prices[sell]-prices[buy];
                if(profit>maxprofit)
                   maxprofit=profit;
                sell++;
            }
            else
              sell++;
        }
        return maxprofit;
        
    }
};
