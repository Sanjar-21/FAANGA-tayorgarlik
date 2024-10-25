#include <stdio.h>

int main(void) {
  int nums[] = {6, 2, 5, 1, 12};
  int n = sizeof(nums) / sizeof(nums[0]);
  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - 1 - i; j++) {
      if(nums[j] > nums[j + 1]) {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    printf("%2d", nums[i]);
  }
  printf("\n");
  return 0;
}
