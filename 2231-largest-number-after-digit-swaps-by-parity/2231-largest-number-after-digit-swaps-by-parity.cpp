class Solution {
public:
    int largestInteger(int num) {
        vector<int> number;
        while(num!=0)
         {
            number.push_back(num%10);
            num=num/10;
        }
        
        reverse(number.begin(),number.end());
        
        
        priority_queue<int> odd;
        priority_queue<int> even;
        
        for(int i=0;i<number.size();i++){
           if(number[i]%2==0) even.push(number[i]);
            else odd.push(number[i]);
        }
        
        
        int result=0;
        
        for(int i=0;i<number.size();i++){
            result=result*10;
            if(number[i]%2==0){
                result+=even.top();
                even.pop();
            }
            else{
                result+=odd.top();
                odd.pop();
            }
        }
        
        
        return result;
    }
};