class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size();
        vector<bool> v1(n+1,false);
        vector<int>v2;
        for(int i=0;i<n;i++)
        {
            v1[nums[i]]= true;
        }
        for(int j=1;j< v1.size();j++)
        {
            if(v1[j]==false)
                v2.push_back(j);
        }
        return v2;
    }
};