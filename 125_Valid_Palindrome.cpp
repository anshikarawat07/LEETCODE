class Solution {
public:
    bool isPalindrome(string s) 
    {
        if (s.length() == 0 || s.length() == 1)
            return true;

        int i = 0, j = s.length() - 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 

        while (i < j) {
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true; 
    }
};
