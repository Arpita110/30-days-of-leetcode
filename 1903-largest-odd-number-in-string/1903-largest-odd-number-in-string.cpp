class Solution {
public:
    string largestOddNumber(string num) {
       string s;
        int i;
        for(i= num.size()-1;i>=0;i--)
        {
            int a=num[i]-'0';
            if(a%2 !=0)
            {
                break;
            }
        }
        for(int j=0;j<=i;j++)
        {
            s+=num[j];
        }
        return s;
    }
};