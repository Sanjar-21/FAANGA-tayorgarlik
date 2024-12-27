# link
# https://leetcode.com/problems/valid-anagram/description/
# code:
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return ''.join(sorted(s)) == ''.join(sorted(t))

