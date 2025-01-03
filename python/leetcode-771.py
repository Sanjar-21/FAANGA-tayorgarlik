# # link
# # https://leetcode.com/problems/jewels-and-stones/description/
# # code:
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        num = 0
        for i in stones:
            if i in jewels:
                num += 1
        return num
