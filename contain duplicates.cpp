/**
Input: nums = [1,2,3,1]
Output: true
**/
 bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        if(n==1)
            return false;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
          if(mp[nums[i]])
                return true;
            mp[nums[i]]++;
        }
        return false;
        
    }
