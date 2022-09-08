class Solution {
public:
     int countSubsetSum(int n,vector<int> &arr,int sum){
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0)dp[i][j]=0;
                if(j==0)dp[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){ //j=0 because we have to consider element=0
                if(arr[i-1]<=j){
                    dp[i][j]=(dp[i-1][j] + dp[i-1][j-arr[i-1]]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int diff) {
        //similar as subset sum with given diff // diff is target here
        //all +ve in s1 and -ve in s2
        int sum=0,n=nums.size();
        sum=accumulate(nums.begin(),nums.end(),sum);
        if(abs(diff)>sum || (sum+diff)%2!=0)return 0;//sum+diff has to be even then only s1 will be found 
        int s=(sum+diff)/2;//(sum-diff)/2 also valid
        return countSubsetSum(n,nums,s);
    }
};