class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max= INT_MIN;
       int l=0;
        int r=nums.size()-1;
        while(r>=l)
        {
            if(nums[r]>=nums[l])
           l++;
            else
                r--;
        }
        return r;
    }
};