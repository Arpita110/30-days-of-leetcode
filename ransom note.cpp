/* RANSOM NOTE 

Input: ransomNote = "aa", magazine = "aab"
Output: true*/



bool canConstruct(string ransomNote, string magazine) {
       int i = 0;
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
       for(int j = 0;j<magazine.size();j++)
      {
        if(ransomNote[i]==magazine[j])
       {
        i++;
       }

        }
     if (i == ransomNote.size()) 
         return true;
           else return false;
    }
