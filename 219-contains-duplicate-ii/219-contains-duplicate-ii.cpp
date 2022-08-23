class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                int a = mp[nums[i]];
                if(abs(a-i)<=k)
                {
                    return 1;
                }
                else 
                {
                    mp[nums[i]] = i;
                }
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return 0;
    }
};