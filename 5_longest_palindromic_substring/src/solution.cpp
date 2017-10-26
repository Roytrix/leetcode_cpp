#include "solution.hpp"
#include <algorithm>
#include <unordered_map>

std::string Solution::longestPalindrome(std::string s) {
  if (s.size() > 1 && !(s.find_first_not_of(s[0]) == std::string::npos)) {
    std::string response = "";

    std::unordered_map<std::string, int> m;
    for (int i = 0; i < s.length(); i++) {

      // check for odd length palindromes
      for (int j = 0; j <= i; j++) {

        if (!s[i + j])
          break;

        if (s[i - j] == s[i + j]) {

          // check for palindromes of length
          // greater than 1
          if ((i + j + 1) - (i - j) > 1)
            m[s.substr(i - j, (i + j + 1) - (i - j))]++;

        } else
          break;
      }

      // check for even length palindromes
      for (int j = 0; j <= i; j++) {
        if (!s[i + j + 1])
          break;
        if (s[i - j] == s[i + j + 1]) {

          // check for palindromes of length
          // greater than 1
          if ((i + j + 2) - (i - j) > 1)
            m[s.substr(i - j, (i + j + 2) - (i - j))]++;

        } else
          break;
      }
    }
    for (std::pair<std::string, int> element : m) {
      if (element.first.size() > response.size()) {
        response = element.first;
      }
    }
    if (response.empty()) {
      response = s.at(0);
    }
    return response;
  } else {
    return s;
  }
}