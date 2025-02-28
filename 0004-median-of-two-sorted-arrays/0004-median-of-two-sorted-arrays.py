class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        num3 = nums1 + nums2
        num3.sort()
        mlen = len(num3)
        if mlen % 2 == 1:
            return num3[mlen/2]
        else:
            x = num3[mlen/2]
            y = num3[mlen/2 - 1]
            x = (x + y) / 2.0
            return x
        