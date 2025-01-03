# # link
# # https://leetcode.com/problems/single-number/
# # code:

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        count = Counter(nums)

        for key, valu in count.items():
            if valu == 1:
                return key

# # 03.01.2025
