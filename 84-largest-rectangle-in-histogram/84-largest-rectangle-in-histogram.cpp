class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         vector<int> nsr;
        vector<int> nsl;
        stack<pair<int,int>> st;
        for(int i = 0; i < heights.size(); i++){
            while(!st.empty() && st.top().first >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                nsl.push_back(-1);
            }
            else{
                nsl.push_back(st.top().second);
            }
            st.push({heights[i], i});
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = heights.size() - 1; i >= 0; i--){
            while(!st.empty() && st.top().first >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                int h = heights.size();
                nsr.push_back(h);
            }
            else{
                nsr.push_back(st.top().second);
            }
            st.push({heights[i], i});
        }
        reverse(nsr.begin(), nsr.end());
        vector<int> ansarr;
        for(int i = 0; i < heights.size(); i++){
            ansarr.push_back(abs(nsr[i] - nsl[i] - 1) * heights[i]);
        }
        int ans = *max_element(ansarr.begin(), ansarr.end());
        return ans;
    }
};