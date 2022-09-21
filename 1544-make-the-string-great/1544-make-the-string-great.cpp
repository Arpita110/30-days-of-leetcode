class Solution {
public:
    string makeGood(string s) {
         stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                
                if( !st.empty() && st.top()==tolower(s[i]) )
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
             }
             else if(s[i]>='a' && s[i]<='z')
             {
                 
                if( !st.empty() && st.top()==toupper(s[i]) )
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
             }
          
        }
        string ans="";
        while(st.size()>0)
        {
            ans= st.top() + ans;
            st.pop();
        }
        return ans;
    }
};