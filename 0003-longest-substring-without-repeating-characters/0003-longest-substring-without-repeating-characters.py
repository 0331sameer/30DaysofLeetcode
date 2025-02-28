class Solution(object):
    def lengthOfLongestSubstring(self, s):
        count = 0
        for i in range(len(s)):
            c = 1
            for j in range (i+1, len(s)):
                check = True
                for k in range(i, j):
                    if s[k] == s[j]:
                        check = False
                        break
                if check == False:
                    break
                c+=1
            if c > count:
                count = c
        return count