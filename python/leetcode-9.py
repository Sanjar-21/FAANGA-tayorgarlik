# # link
# # https://leetcode.com/problems/palindrome-number/description/
class Solution:
    def isPalindrome(self, x: int) -> bool:
        word = str(x)
        low, hegih = 0, len(word) - 1
        while low < hegih:
            if word[low] != word[hegih]:
                return False
            low += 1
            hegih -= 1
        return True