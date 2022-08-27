class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.length()!=t.length()) 
           return false;
    
    map<char,char>umps,tmp;
    
    for(int i=0;i<s.length();i++)
    {
        umps[s[i]]=t[i];
    }
    
    for(auto it:umps)
    {
       tmp[it.second]='a'; 
    }
    
    if(tmp.size()!=umps.size()) return false;
    
   for(int i=0;i<t.length();i++)
   {
       char c=t[i];
       if(umps[s[i]]!=c)
       {
           return false;
       }
   }
    
    return true; 
    }
};