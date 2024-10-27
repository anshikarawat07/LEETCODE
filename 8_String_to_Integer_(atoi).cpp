class Solution {
public:
    int myAtoi(string s) {
        int sign = 1, i = 0, num = 0;
        while (i < s.size() && s[i] == ' ') i++;
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            num = num * 10 + digit;
            i++;
        }
        
        return num * sign;
    }
};
