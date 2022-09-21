class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
        int res=INT_MAX;
        for(int i=k-1;i<nums.size();i++)
        {
            res=min(res,abs(nums[i]-nums[i-k+1]));
        }
        return res;  
    }
};