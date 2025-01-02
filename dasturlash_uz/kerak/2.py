def arraybirsuz(self, nums: list[int]) -> int:
    count = Counter(nums)
    for key, value in nums.items():
        if value == 1:
            return key
        return -1
