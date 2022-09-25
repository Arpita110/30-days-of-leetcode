class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n = nums.size();
        double sm = 0;
        double ans = 0;
        for (int i=0 ; i<k ; i++)
            sm += nums[i];
        
        ans = sm/k;
        
        int i=0;
        while(i+k<n)
        {
            sm -= nums[i];
            sm += nums[i+k];
            ans = max(ans, sm/k);
            i++;
        }
        
        return ans; 
    }
};