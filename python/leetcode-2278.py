# # link
# # https://leetcode.com/problems/percentage-of-letter-in-string/description/
# # code:
class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        count = s.count(letter)
        return int(count / len(s) * 100)
# 03.01.2025
