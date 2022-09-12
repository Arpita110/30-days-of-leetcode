class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int five = 0 , ten = 0 ;
    bool ans = true;
    
    for( int i=0 ; i<bills.size();i++ ){
        if( bills[i] == 5 ){
            five++;
        }
        else if( bills[i] == 10 ){
            if( five < 1 ){ 
                ans = false;
                break;
            }
            else{
                ten++; 
                five--;  
            }
        }
        else{
            if( five > 0 && ten > 0  ){ 
                five--;
                ten--;
            }
            else if( five >= 3){  
                five -= 3;  
            }
            else{
                ans = false;
                break;
            }
        }
    }
    
    return ans;
    }
};