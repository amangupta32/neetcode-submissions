class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.length()!=t.length()){
            return false;
    }
      else{
        int hs[27]={0};
      int ht[27]={0};
      for( int i =0;i<s.length();i++)
      {
       hs[s[i]-'a'+1]++;
       ht[t[i]-'a'+1]++;
      }
      for(int  i=1;i<=26;i++)
      {if(hs[i]!=ht[i])
      return false;

      }
      return true;
      }
    }
       
};
