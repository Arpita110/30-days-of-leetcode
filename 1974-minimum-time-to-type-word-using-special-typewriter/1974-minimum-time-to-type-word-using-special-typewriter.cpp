class Solution {
public:
    int minTimeToType(string word) {
      int ans=0;
        char ch='a';
        for(int i=0;i<word.size();i++)
        {
            int val=abs(word[i]-ch);
            int val2=abs(26-val);
            ans+=min(val,val2)+1;
            ch=word[i];
        }
        return ans;  
    }
};