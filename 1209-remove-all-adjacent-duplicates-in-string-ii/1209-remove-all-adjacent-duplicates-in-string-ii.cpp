class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st; 
        for(auto c:s)
        {
              if(st.size()&&st.top().first==c)
            {
                st.top().second++;
                if(st.top().second==k)
                    st.pop();
            }
            else
            st.push({c,1});
        }
        string res;
        while(st.size())
        {
            while(st.top().second--)
                res+=st.top().first;
            st.pop();
        }
        reverse(begin(res),end(res));
        return res;
  
    }
};