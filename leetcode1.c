// letcodga link
// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/
int climbStairs(int n) {
  if (n <= 2)
    return n;

  int term1 = 1, term2 = 2;

  for (int i = 3; i <= n; i++) {
    int nums = term1 + term2;
    term1 = term2;
    term2 = nums;
  }

  return term2;
}
