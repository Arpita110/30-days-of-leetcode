class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n=digits.size();
        int c=1;
        for(int i=n-1;i>=0;i--){
            int z=digits[i]+c;
            if(z==10){
                digits[i]=0;
                c=1;         
            }
            else{
                digits[i]=z;
                c=0;
            }
        }
        if(c==1)  
             digits.insert(digits.begin(),1); 
        return digits;
    }
};