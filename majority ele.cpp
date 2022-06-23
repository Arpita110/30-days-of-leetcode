/*
MAJORITY ELEMENT
Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/


int majorityElement(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
    }
