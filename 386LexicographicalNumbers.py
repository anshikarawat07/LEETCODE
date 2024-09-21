class Solution(object):
    def lexicalOrder(self, n):
        lists=[]
        for i in range (1,n+1):
            lists.append(i)
        return sorted(lists, key=str)
        
