# link
# https://leetcode.com/problems/intersection-of-two-arrays/description/

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        bir = set(nums1)
        ikki = set(nums2)
        return list(bir & ikki)
