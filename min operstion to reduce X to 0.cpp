/**

Input: nums = [1,1,4,2,3], x = 5
Output: 2
Explanation: The optimal solution is to remove the last two elements to reduce x to zero.


 int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum < x) return -1;
		if(sum == x) return nums.size();

		int target = sum - x, currentSum = 0, start = 0, maxSize = 0;
		for(int i = 0; i < nums.size(); i++) {
			currentSum += nums[i];

			while(currentSum > target)
				currentSum -= nums[start++];

			if(currentSum == target)
				maxSize = max(maxSize, i - start + 1);
		}

		return (maxSize == 0) ? - 1 : nums.size() - maxSize;
        
