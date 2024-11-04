class Solution {
public:
    string compressedString(string word) {
        string str="";
        int i=0,c=1;
        while(i<word.length())
        {
            if(word[i+1]==word[i] && i+1 <word.length() && c<9)
            c++;
            else
            {
                str+=to_string(c)+word[i];
                c=1;
            }
            i++;
        }
        return str;
    }
};
