class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v;
        priority_queue<int> odd;
        priority_queue<int> even;
        
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]%2==0) 
               even.push(nums[i]);
            else 
                odd.push(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                v.push_back(even.top());
            even.pop();
            }
            else
            {
            v.push_back(odd.top());
            odd.pop();
            }
        }
        return v;
    }
};