class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int add=0;
     for(auto sum:nums){
       add=add+sum;
}
     int n=nums.size();
      int sum=n*(n+1)/2;
      int a=sum-add;
      return a;  
        
    }
};