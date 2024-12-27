# # https://leetcode.com/problems/binary-search/description/
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        for index, son in enumerate(nums):
            if son == target:
                return index
        return -1
    
#  # Lekin eng sekin ishlaydigani shu 
