class Solution {
public:
    bool areOccurrencesEqual(string s) {
     map<int,int>hash;

    for(int i=0;i<s.length();i++)
    {
        hash[s[i]]++;
    }
    int flag=0;
    for(int i=1;i<s.length();i++)
    {
        if(hash[s[0]]!=hash[s[i]])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    }   
};