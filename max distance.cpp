/*
Input: nums1 = [55,30,5,4,2], nums2 = [100,20,10,10,5]
Output: 2
Explanation: The valid pairs are (0,0), (2,2), (2,3), (2,4), (3,3), (3,4), and (4,4).
The maximum distance is 2 with pair (2,4).
*/
int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int ans = 0;
        for(int i = 0, j = 0; i < nums1.size() && j < nums2.size(); i++) {
            while(j < nums2.size() && nums1[i] <= nums2[j]) 
                j++;
            ans = max(ans, j-i-1);
        }
        return ans;
    }
