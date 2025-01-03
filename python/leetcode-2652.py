# # link
# # https://leetcode.com/problems/sum-multiples/description/
# # code:
class Solution:
    def sumOfMultiples(self, n: int) -> int:
        son = 0
        for i in range(1, n+1):
            if i % 3 == 0:
                son += i
            elif i % 5 == 0:
                son += i
            elif i % 7 == 0:
                son += i

        return son
# 03.01.2025
