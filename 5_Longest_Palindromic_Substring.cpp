class Solution {
public:
    bool isPalindrome(string &str, int i, int j) {
        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int l = s.length();
        if (l == 0) return "";

        int start = 0, maxLength = 1;
        
        for (int i = 0; i < l - 1; i++) 
        {
            for (int j = l - 1; j > i; j--) 
            {
                if (s[i] == s[j]) 
                {
                    if (isPalindrome(s, i, j))
                     {
                        int currentLength = j - i + 1;
                        if (currentLength > maxLength) 
                        {
                            start = i;
                            maxLength = currentLength;
                        }
                        break; 
                    }
                }
            }
        }
        return s.substr(start, maxLength);
    }
};
