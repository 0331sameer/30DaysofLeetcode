class Solution(object):
    def longestPalindrome(self, s):
        if s == s[::-1]:
            return s
        count = 0
        palStr = None
        for i in range(len(s)):
            st = s[i:]
            stArr = [st[:j] for j in range(len(st),0,-1)]
            for j in stArr:
                if j == j[::-1]:
                    if count < len(j):
                        count = len(j)
                        palStr = j
                        break

        return palStr
        
        