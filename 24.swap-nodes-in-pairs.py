#
# @lc app=leetcode id=24 lang=python3
#
# [24] Swap Nodes in Pairs
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        node_1, node_2 = head, head.next
        head, prev = node_2, node_1

        while node_2:
            node_1.next, node_2.next = node_2.next, node_1
            if node_2 != head:
                prev.next, prev = node_2, node_1
            node_1 = node_1.next
            if not node_1:
                return head
            node_2 = node_1.next
        return head    
# @lc code=end

