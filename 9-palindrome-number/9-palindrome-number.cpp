class Solution {
public:
    bool isPalindrome(int x) {
        long int temp=x;
         int ld;
        long int rev=0;
       while(x>0)
       {
        ld=x%10;
         rev=(rev*10)+ld;
         x=x/10;
         }
         if(temp==rev)
         {
        return true;
          }
        else
         return false;


    }
};