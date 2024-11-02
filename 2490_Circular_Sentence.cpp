class Solution {
public:
    bool isCircularSentence(string sentence) {
        int index;
        if(sentence.length()==1 ||sentence.length()==0)
        return true;
        if(sentence[0]!=sentence[sentence.length()-1])
        return false;
        for(int i=1;i<sentence.length()-2;i++)
        {
           if(sentence[i+1]==' ')
           {
            if(sentence[i]==sentence[i+2])
            i++;
            else
            return false;
           }
        }
        return true;
    }
};
