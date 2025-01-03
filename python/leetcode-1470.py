# # link
# # https://leetcode.com/problems/shuffle-the-array/description/
# # code:

class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        result = []
        index = 0
        while index < n:
            result.append(nums[index])
            result.append(nums[index + n])
            index += 1

        return result

# # 03.01.2025
