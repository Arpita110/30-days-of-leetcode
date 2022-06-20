/*
FIRST UNIQUE CHAT=R IN STRING


Input: s = "leetcode"
Output: 0*/



 int firstUniqChar(string s) {
      map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        int a=-1;
         for(int i=0;i<n;i++)
         {
             if(mp[s[i]]==1)
             {
                 a=i;
                 break;
             }
         }
        return a;
        
    }
