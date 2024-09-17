class Solution {
public:
    bool isPalindrome(int x) {
       stringstream ss;
       ss << x;
       string str = ss.str();
       for(int i=0,j=str.length()-1;i<j;i++,j--)
       {
        if(str[i]!=str[j])
        return false;
       }
       return true;
    }
};
