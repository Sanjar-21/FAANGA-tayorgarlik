# # link
# # https://leetcode.com/problems/truncate-sentence/description/
# # code:
class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        return " ".join(s.split()[:k])
# # 03.01.2025
