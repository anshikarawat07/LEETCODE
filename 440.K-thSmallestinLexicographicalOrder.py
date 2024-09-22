class Solution(object):
    def findKthNumber(self, n, k):
        def count_prefix(prefix):
            next_prefix = prefix + 1
            total = 0
            while prefix <= n:
                total += min(n - prefix + 1, next_prefix - prefix)
                next_prefix *= 10
                prefix *= 10
            return total
        current = 1
        k -= 1
        while k:
            count = count_prefix(current)
            if k >= count:
                k -= count   
                current += 1  
            else:
                k -= 1      
                current *= 10
        return current
        
