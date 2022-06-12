/***
Maximum Erasure Value
Input: nums = [4,2,4,5,6]
Output: 17
Explanation: The optimal subarray here is [2,4,5,6].
**/

 int maximumUniqueSubarray(vector<int>& nums) {
     int i=0;
        int j=0;
        int sum=0;
        int maxsum=INT_MIN;;
        int n = nums.size();
        map<int,int>mp;
        while(i<n)
        {
            sum+=nums[i];
            while(mp.find(nums[i])!= mp.end())
            {
                sum-=nums[j];
                mp.erase(nums[j]);
                j++;
            }
            maxsum = max(maxsum,sum);
            mp[nums[i]]=i;
            i++;
            
        }
        return maxsum;
    }
