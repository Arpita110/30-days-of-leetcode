class Solution {
public:
    string reverseWords(string s) {
     stack<string> st;
        int i;
        for(i=0;i<s.length();i++)
        {
            string str="";
            if(s[i]==' ')
            {
                continue;
            }
            else {
                while(i<s.size() && s[i]!=' ')
                {
                    str+=s[i];
                    i++;
                }
            }
            st.push(str);
        }
        string output="";
        while(!st.empty())
        {
            output+=st.top();
            if(st.size()==1)
            {
                st.pop();
            }
            else
            {
                output+=' ';
                st.pop();
            }
        }
        return output;
    }
};