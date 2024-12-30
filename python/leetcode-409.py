# # link 
# # https://leetcode.com/problems/longest-palindrome/
# # code: ->
class Solution:
    def longestPalindrome(self, s: str) -> int:
        char_count = Counter(s)
        lenght = 0
        for count in char_count.values():
            lenght += count // 2 * 2

        if any(count % 2 == 1 for count in char_count.values()):
            lenght += 1

        return lenght
