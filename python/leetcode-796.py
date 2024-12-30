# # link
# # https://leetcode.com/problems/rotate-string/
# # code:
class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        return goal in (s + s)


