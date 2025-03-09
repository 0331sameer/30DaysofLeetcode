class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign = -1 if x < 0 else 1
        rev = abs(x)
        srev = str(rev)
        srev = srev[::-1]
        rev = int(srev)
        rev = sign * rev

        return rev if ((pow(2, 31) - 1) >= rev and (-1 * pow(2,31)) <= rev) else 0
        