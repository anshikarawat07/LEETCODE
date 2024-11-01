class Solution {
public:
    string makeFancyString(string s) {
        if(s.length()==0 || s.length()==1||s.length()==2)
        return s;
        string str="";
        str+=s[0];
        int c=1,index=0,i;
        for(i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            c++;
            else
            c=1;
            if(c<3)
            str+=s[i];
        }
        return str;
        
    }
};
