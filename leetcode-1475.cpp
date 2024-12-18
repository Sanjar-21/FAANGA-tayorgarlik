// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/?envType=daily-question&envId=2024-12-18

class Solution {
public:
  vector<int> finalPrices(vector<int> &prices) {
    for (size_t i = 0; i < prices.size(); ++i) {
      for (size_t j = i + 1; j < prices.size(); ++j) {
        if (prices[i] >= prices[j]) {
          prices[i] -= prices[j];
          break;
        }
      }
    }
    return prices;
  }
};