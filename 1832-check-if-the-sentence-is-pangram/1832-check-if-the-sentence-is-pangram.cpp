class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<int,int>mp;
        for(int i=0;i<sentence.size();i++)
        {
            mp[sentence[i]]++;
        }
        if(mp.size()==26)
            return true;
        else
            return false;
    }
};