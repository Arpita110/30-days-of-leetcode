/*
Input: prices = [3,3,5,0,0,3,1,4]
Output: 6
Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.
*/


int maxProfit(vector<int>& prices) {
       if(prices.size()==0)
            return 0;
        int buy1 = INT_MAX;
        int profit1 = INT_MIN;
        int buy2 = INT_MAX;
        int profit2 = INT_MIN;
        
        for(int i=0; i<prices.size(); i++){
            buy1 = min(buy1, prices[i]);
            profit1 = max(profit1, prices[i] - buy1);
            buy2 = min(buy2, prices[i] - profit1);
            profit2 = max(profit2, prices[i] - buy2);
        }
        return profit2;
    }
