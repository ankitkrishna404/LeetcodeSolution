class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int diff;
        for(int i=0;i<prices.size()-1;i++)
        {
                diff = prices[i+1] - prices[i];
              if(diff > 0)
                  maxprofit += diff;
        }
        return maxprofit;
    }
};