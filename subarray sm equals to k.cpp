/*
Subarray Sum Equals K
Input: nums = [1,2,3], k = 3
Output: 2
*/


 int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        int count=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k)
                count++;
            if(mpp.find(sum-k)!=mpp.end()){
                count+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return count;
    
    }
