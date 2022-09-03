class Solution {
public:
    int characterReplacement(string s, int k) {
      map<char,int>mp;
        int l=0;
        int res=0;
        int tc=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            tc= max(tc,mp[s[i]]);
            if(i-l+1-tc>k)
            {
                mp[s[l]]--;
                l++;
                
            }
            res= max(res,i-l+1);
        }
        return res;
    }
};