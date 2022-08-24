class Solution {
public:
    bool solve(string s, int i, int j){
    while(i<j){
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
    
    bool validPalindrome(string s) {
      int i=0;
        int j=s.size()-1;
        while(i<j && s[i]==s[j])
        {
            i++;
            j--;
        }
        return solve(s,i,j-1)||solve(s,i+1,j);
    }
};
 