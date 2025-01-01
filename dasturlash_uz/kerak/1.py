array = list(range(1, 11))

left, right = 0, len(array) - 1

while left < right:
    array[left], array[right] = array[right], array[left]
    left += 1
    right -= 1

print(array)
