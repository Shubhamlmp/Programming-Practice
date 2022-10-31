class ListNode:
  def __init__(self, val=0, next = None):
      self.val = val
      self.next = next
      
class Solution:
  def addTwoNumbers(self, l1, l2, c=0):
    """
    :type l1: ListNode
    :type l2: ListNode
    :rtype: ListNode
    """
    val = l1.val + l2.val + c
    c = val // 10
    ret = ListNode(val % 10)

    if (l1.next != None or l2.next != None or c != 0):
        if l1.next == None:
            l1.next = ListNode(0)
        if l2.next == None:
            l2.next = ListNode(0)
        ret.next = self.addTwoNumbers2(l1.next, l2.next, c)
    return ret
  
sol = Solution()
l1 = [9,9,9,9,9,9,9]
l2 = [9,9,9,9]
print(sol.addTwoNumbers(l1, l2))
