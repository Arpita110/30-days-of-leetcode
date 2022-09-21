class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     int diff = INT_MAX, ans = 0;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++)
        {
            int start = i+1, end = nums.size()-1;
            
            while(start < end){
                int currSum = nums[i] + nums[start] + nums[end];
                
                if(currSum == target) 
                    return currSum;
                if(abs(target-currSum) < diff){
                    diff = abs(target-currSum);
                    ans = currSum;
                }
                
                if(currSum > target) end--;
                else start++;
            }
        }
        return ans;   
    }
};