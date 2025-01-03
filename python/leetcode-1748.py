# # link
# # https://leetcode.com/problems/sum-of-unique-elements/
# # code:

class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        count = Counter(nums)
        result = 0
        for key, value in count.items():
            if value == 1:
                result += key

        return result
# 02.01.2025
