# # Salolarga bit classni ichga fuksiya qilgan cod
from typing import List

class Dasturlash_uz:
    def bir(num: List[int]) -> int:
        return max(num)
    def ikki(num: List[int]) -> int:
        return min(num)
    def uch(num: List[int]) -> int:
        return sum(num) // len(num)
    def turt(num: List[int], n: int) -> bool:
        index = 0
        while index < len(num):
            if num[index] == n:
                return True
            else:
                return False
    