class Solution {
public:
    int maxDepth(string s) {
         stack<char> st;
        int sum=0,a=0;
        for(int i=0;i<s.length();i++)
        {
            st.push(s[i]);
        }
        while(!st.empty())
        {
            if(st.top()==')')
            {
                a++;
                sum=max(sum,a);
            }
            else if(st.top()=='(')
            {
                a--;
            }
            st.pop();
        }
        return sum;
    }
};