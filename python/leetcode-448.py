# # link
# # https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
# # code:
class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ns = set(nums)
        n = len(nums)
        gg = []
        for num in range(1, n + 1):
            if num not in ns:
                gg.append(num)

        return gg
# 03.01.2025
