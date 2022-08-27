class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size() != s.size())
            return false;
        string ss = s + s;
        for(int i = 0; i < s.size(); i++)
            if(ss.substr(i,goal.size()) == goal)
                return true;
        return false;
    }
};