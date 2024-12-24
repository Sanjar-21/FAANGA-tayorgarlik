# link
# https://leetcode.com/problems/contains-duplicate/description/
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen set()
        for num in nums:
            if num in seen:
                return True:
            seen.add(num)
        return False
