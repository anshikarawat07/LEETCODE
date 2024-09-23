class Solution(object):
    def minExtraChar(self, s, dictionary):
        n = len(s)
        DP = [0] * (n + 1)
        for i in range(1, n + 1):
            DP[i] = DP[i - 1] + 1 
            for j in range(i):
                if s[j:i] in dictionary:  
                    DP[i] = min(DP[i], DP[j]) 
        return DP[n]

        
