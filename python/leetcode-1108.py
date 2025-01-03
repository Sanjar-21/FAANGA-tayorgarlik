# # link
# # https://leetcode.com/problems/defanging-an-ip-address/description/
# # code:

class Solution:
    def defangIPaddr(self, address: str) -> str:
        return address.replace('.','[.]')
# # 03.01.2025
