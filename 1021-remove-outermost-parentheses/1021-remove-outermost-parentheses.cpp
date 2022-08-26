class Solution {
public:
    string removeOuterParentheses(string s) {
    string res="";
    stack<char> st;
    for(char e:s)
    {
        if(e=='(')
        {
            st.push(e);
            if(st.size()>1)
                res+=e;
        }
         if(e==')')
        {
            if(st.size()==1)
                st.pop();
            else
            {
                res+=e;
                st.pop();
            }
        }
    }
    return res;
    }
};