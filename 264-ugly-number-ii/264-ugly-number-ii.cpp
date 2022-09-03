class Solution {
public:
    int nthUglyNumber(int n) {
        int nm2 = 2;
        int nm3 = 3;
        int nm5 = 5;
        
        int i2=0, i3=0, i5=0;
        
        int ugly[n];
        ugly[0] = 1;
        
        for(int i=1;i<n;i++){
            int mini = min({nm2, nm3, nm5});
            ugly[i] = mini;
            
            if(mini==nm2){
                i2++;
                nm2 = ugly[i2]*2;
            }
            if(mini==nm3){
                i3++;
                nm3 = ugly[i3]*3;
            }
            if(mini==nm5){
                i5++;
                nm5 = ugly[i5]*5;
            }
        }
        return ugly[n-1];
    }
};