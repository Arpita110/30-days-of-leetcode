 
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//Output: [1,2,2,3,5,6]
//Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
//The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
         vector<int> res;

        for(int i=0;i<m;i++){
            res.push_back(nums1[i]);
        }

        for(int j=0;j<n;j++){
            res.push_back(nums2[j]);
        }

        sort(res.begin(),res.end());

        int k = 0;

        for(int i=0;i<m+n;i++){
            nums1[i] = res[k];
            k++;
        }
