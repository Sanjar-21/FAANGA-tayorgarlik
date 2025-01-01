from typing import List
# # link
# #  https://leetcode.com/problems/reverse-string/description/
# # code:
class Solution:
    def reverseString(self, s: List[str]) -> None:
        left, right, = 0, len(s) - 1
        while left < right:
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1

        return s
# # 01.01.2025