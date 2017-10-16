#include "solution.hpp"
#include <iterator>

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
  std::vector<int> response = {};
  std::vector<int>::iterator number1;
  std::vector<int>::iterator number2;

  for (number1 = nums.begin(); number1 != nums.end(); ++number1) {
    for (number2 = nums.begin(); number2 != nums.end(); ++number2) {
      if (number1 != number2 && target == *number1 + *number2) {
        int position1 = number1 - nums.begin();
        response.push_back(position1);
        int position2 = number2 - nums.begin();
        response.push_back(position2);
        return response;
      }
    }
  }
  return response;
}