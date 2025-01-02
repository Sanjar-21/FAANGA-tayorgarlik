# # link
# # https://leetcode.com/problems/array-partition/
# # code:
class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        result = 0
        for i in range(0, len(nums), 2):
            result += nums[i]

        return result
# # 02.01.2025
