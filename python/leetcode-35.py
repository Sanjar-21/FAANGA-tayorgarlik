# # link
# # https://leetcode.com/problems/search-insert-position/description/
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        for index, num in enumerate(nums):
            if num == target:
                return index
            elif num > target:
                return index
        return index + 1
'''
bundanham yahshilasam ham buladi bu?
'''