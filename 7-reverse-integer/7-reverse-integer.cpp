class Solution {
public:
    int reverse(int x) {
        long int l = -2147483648, r = 2147483647, reversed = 0;
        while(x){
            int d = x%10;
            x = x/10;
            reversed = reversed*10 + d ; 
        }
        if(reversed < l || reversed > r) 
            return 0;
        return (int)reversed;
    }
};