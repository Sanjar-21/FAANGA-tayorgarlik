# # link
# # https://leetcode.com/problems/length-of-last-word/description/
# # code: ->>


class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        digit = s.split()
        return len(digit[-1])
