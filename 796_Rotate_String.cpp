class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
        return false;
        if(s==goal)
        return true;
        int i=0;
        while(i<s.length())
       {
        char c=s[0];
        for(int j=1;j<s.length();j++)
        {
            s[j-1]=s[j];
        }
        s[s.length()-1]=c;
        if(s==goal)
        return true;
        i++;
       }
       return false;
    }
};
