class Solution {
public:
    int numberOfSubstrings(string s) {
         int l = 0 , r = 0 ;
    map<char,int>mp;
    int len = s.size() - 1;
    int cnt = 0;
    while(r<=s.size()) 
    {
        mp[s[r]]+=1; 
        while(mp['a'] and mp['b'] and mp['c']) 
        {
            cnt+=1 + (len-r); 
            mp[s[l]]-=1; 
            l++; 
        }
        r++;
    }
    return cnt;
    }
};