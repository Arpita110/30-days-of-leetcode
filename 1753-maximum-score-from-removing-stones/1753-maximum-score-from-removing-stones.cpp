class Solution {
public:
    int maximumScore(int a, int b, int c) {
         priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int score=0;
        while(!pq.empty()){
            int temp1=pq.top();
            pq.pop();
            int temp2=pq.top();
            pq.pop();
            if(temp1==0 || temp2==0) break;
            else{
            pq.push(--temp1);
            pq.push(--temp2);
            }
            score++;
        }
        return score;
    }
};