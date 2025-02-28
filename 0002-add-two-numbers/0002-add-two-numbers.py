# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        num1 = l1.val
        num2 = l2.val
        p = l1.next
        count = 1
        while p:
            num1 = num1 + (p.val * pow(10, count))
            p = p.next
            count+=1
        p = l2.next
        count = 1
        while p:
            num2 = num2 + (p.val * pow(10, count))
            p = p.next
            count+=1
        num1 += num2

        l3 = None

        while num1 != 0:
            if l3 == None:
                l3 = ListNode(num1 % 10)
            else:
                p = l3
                while p.next != None:
                    p = p.next
                p.next = ListNode(num1 % 10)
            num1 /= 10;
        
        if l3 == None:
            l3 = ListNode(0)
        return l3
        
        