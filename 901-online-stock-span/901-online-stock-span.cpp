class StockSpanner {
public:
   stack<pair<int,int>>st;
    int index =0;
    StockSpanner() {
        
    }
    int next(int price) {
        while(!st.empty() && price>=st.top().first) 
            st.pop();
        int ans ;
        if(st.empty())
        {
          st.push({price,index});
            index++;
          return index;
        }
        else if(price<st.top().first)
        {
            ans = index-st.top().second;
            st.push({price,index});
            index++;
        }
     return ans;
    
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */