class Solution {
public:
    int fillCups(vector<int>& amount) {
         priority_queue<int> pq;
        
        for(int i=0;i<amount.size();i++){
            if(amount[i]!=0) 
                pq.push(amount[i]); 
        }
        
      
        int count=0;
        int x,y=0;
        
        while(!pq.empty()){
            x=pq.top();
            pq.pop();
            x--;
            if(!pq.empty()){
            y=pq.top();
            pq.pop();
            y--;
            }  
            if(x>0) pq.push(x);
            if(y>0) pq.push(y);
            count++;
        }
        
        return count;
    }
};