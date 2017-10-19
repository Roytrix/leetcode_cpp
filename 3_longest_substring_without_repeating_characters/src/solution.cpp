#include "solution.hpp"
#include <iterator>
#include <string>
#include <unordered_map>

int Solution::lengthOfLongestSubstring(std::string s) {
  int maxLength = 0;
  auto left = s.begin();
  std::unordered_map<char, std::string::iterator> m;

  for (auto it = left; it != s.end(); ++it) {
    left = m.find(*it) == m.end()
               ? left
               : std::max(left, std::next(m.find(*it)->second));
    maxLength = std::max(maxLength, (int)std::distance(left, std::next(it)));
    m[*it] = it;
  }

  return maxLength;
}