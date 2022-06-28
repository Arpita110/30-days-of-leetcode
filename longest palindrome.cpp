/*
LONGEST PALINDROME
Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7./
*/

 int longestPalindrome(string s) {
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int ans=0,a=0;
        for(auto i :m)
        {
            if(i.second%2==0)
            {
              ans+=i.second;
            }
            else
            {
                ans+=i.second-1;
                a=1;
            }
            
        }
        if(a!=0)
            return ans+1;
        return ans;
    }
};
