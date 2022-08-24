class Solution {
public:
    bool isPalindrome(string s) {
      string t="";
      for(int i=0;i<s.size();i++)
       {
      if(s[i] >='A' && s[i]<='Z' || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
       t+=tolower(s[i]);
       else
       continue; 
       }
         s=t;
        reverse(s.begin(),s.end());
            if(s==t)
                return true;
        return false;
}  
    
};