class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> op;
        for(int num: asteroids){
            if (num>0 || op.empty() || op.back()<0 ){
                op.push_back(num);
            }
            else{
                while(!op.empty() && op.back()< -num && op.back()>0){
                    op.pop_back();
                }
                if (op.empty() || op.back()<0){
                    op.push_back(num);
                }else if (op.back() == -num){
                    op.pop_back();
                }
            }
        }
        return op;
    }
};