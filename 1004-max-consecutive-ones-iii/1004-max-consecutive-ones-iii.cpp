class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res=INT_MIN;
    int totalZero = 0;
    int i = 0 , j = 0;
    while( j < nums.size())
    {
        if(nums[j] == 0)
            totalZero++;
        while(totalZero > k)
        {
            if(nums[i] == 0)
                totalZero--;
            i++;
        }
        res = max(res,j-i+1);
        j++;
    }
    return res;
    }
};