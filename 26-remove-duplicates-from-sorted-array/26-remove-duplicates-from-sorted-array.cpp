class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[count]!=nums[i])
            {
                count++;
                nums[count]=nums[i];
            }
        }
        count++;
        return count;
        
    }
};