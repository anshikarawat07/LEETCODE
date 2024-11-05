class Solution {
public:
    int minChanges(string s) {
        int i,c=0;
       for(i=0;i<s.length()-1;i=i+2)
       {
        if(s[i]!=s[i+1])
        {
            s[i]=s[i+1];
            c++;
        }
       }
       return c;
    }
};
