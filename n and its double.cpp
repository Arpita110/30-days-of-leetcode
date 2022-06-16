/**
Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
**/

bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==2*arr[j]||arr[j]==2*arr[i])
                    return true;
            }
        }
        return false;
    }
