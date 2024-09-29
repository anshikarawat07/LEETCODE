class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0,buy=prices[0],i;
        for(i=1;i<prices.size();i++)
        {
            if(prices[i]>buy)
            {
                mp=max(mp,prices[i]-buy);
            }
            buy=min(buy,prices[i]);
        }
        return mp;
    }
};
