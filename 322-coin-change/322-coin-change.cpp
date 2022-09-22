class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    vector<vector<int>> dp(coins.size(), vector<int>(amount+1));
        for(int i=0;i<coins.size();i++){
            dp[i][0] = 0;
        }
        for(int j=1;j<=amount;j++){
            if(j%coins[0] == 0){
                dp[0][j] = j/coins[0];
            }
            else dp[0][j] = INT_MAX;
        }
        for(int i=1;i<coins.size();i++){
            for(int j=1;j<=amount;j++){
                int include = INT_MAX; 
                if(j >= coins[i] && dp[i][j-coins[i]]!=INT_MAX){
                    include = 1+dp[i][j-coins[i]];
                }
                //exclude
                int exclude = dp[i-1][j];
                dp[i][j]= min(include,exclude);
            }
        }
        int result = dp[coins.size()-1][amount];
        return result>=INT_MAX-1  ? -1 : result;  
}
};