class Solution {
public:
   int area(vector<int>&a,int n){
        stack<pair<int,int>>st;
        int left[n],right[n];
        for(int i=0;i<n;i++){
            while(!st.empty()&&st.top().first>=a[i]) 
                st.pop();
            if(st.empty()) 
                left[i]=-1;
            else left[i]=st.top().second;
            st.push({a[i],i});
        }
        while(!st.empty()) 
            st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top().first>=a[i]) 
                st.pop();
            if(st.empty()) 
                right[i]=n;
            else 
                right[i]=st.top().second;
            st.push({a[i],i});
        }
        int maxx=0;
        for(int i=0;i<n;i++) 
            maxx=max(maxx,a[i]*(right[i]-left[i]-1));
        return maxx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>hold(m,0);
        for(int i=0;i<m;i++){
            if(matrix[0][i]=='1') 
                hold[i]=1;
        }
        int maxx=area(hold,m);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0') hold[j]=0;
                else hold[j]+=1;
            }
            maxx=max(maxx,area(hold,m));
        }
        return maxx;
    }

};