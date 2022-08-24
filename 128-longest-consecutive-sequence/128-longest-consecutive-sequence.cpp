class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {  
       int len = 1;
       int maxCount = 1;
       int n = nums.size();
       if(nums.size() == 0)
       {
        return 0;
       }  
      sort(nums.begin(),nums.end());       
      for(int i = 0;i<n-1;i++)
      {
        if(nums[i] + 1 == nums[i+1])
        {
            len++;
        }
        else if(nums[i]!=nums[i+1])
        {
            len=1;
        }
        maxCount=max(len,maxCount);
       }  
      return maxCount;   
    }
};