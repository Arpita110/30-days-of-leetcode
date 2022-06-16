/** max substring

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
*/
 int expand(int l,int r,string &s)
{
    while(l>=0 && r<s.size() && s[l]==s[r])
        l--,r++;
    
    return r-l-1;
}

string longestPalindrome(string s)
{
    int start=0;  
    int maxLen=0;
    int len;
    for(int i=0;i<s.size();i++)
    {
        int len1 = expand(i,i,s);  
        int len2 = expand(i,i+1,s);  
         len = max(len1,len2);  
        
        if(len>maxLen) 
        {
            start=i-(len-1)/2;   
            maxLen=len;
        }
    }
    return s.substr(start,maxLen);
    }
