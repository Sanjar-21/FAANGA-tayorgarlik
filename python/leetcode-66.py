# # link
# # https://leetcode.com/problems/plus-one/description/
# # code: ->>
from typing import List


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = int("".join(map(str, digits))) + 1
        digits = [int(digit) for digit in str(num)]
        return digits
