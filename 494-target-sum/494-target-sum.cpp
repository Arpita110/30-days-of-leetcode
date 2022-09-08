class Solution {
public:
    int solve(int n,vector<int> &nums,int t,int curr=0){
        if(n==0){
            if(t==curr)return 1;
            return 0;
        }
        return (solve(n-1,nums,t,curr-nums[n-1])+solve(n-1,nums,t,curr+nums[n-1]));
    }
    int findTargetSumWays(vector<int>& nums, int t) {
        int n=nums.size();
        return solve(n,nums,t);
    }
};