#include "../src/solution.hpp"
#include "catch_main.hpp"

Solution solution;

SCENARIO(
    "Find the length of the longest substring without repeating characters") {
  GIVEN("a bunch of strings") {
    WHEN("the string is abcabcbb") {
      std::string input = "abcabcbb";
      int response = solution.lengthOfLongestSubstring(input);
      THEN("the answer is 3") {
        int answer = 3;
        REQUIRE(response == answer);
      }
      WHEN("the string is bbbbb") {
        std::string input = "bbbbb";
        int response = solution.lengthOfLongestSubstring(input);
        THEN("the answer is 1") {
          int answer = 1;
          REQUIRE(response == answer);
        }
      }
      WHEN("the string is pwwkew") {
        std::string input = "pwwkew";
        int response = solution.lengthOfLongestSubstring(input);
        THEN("the answer is 3") {
          int answer = 3;
          REQUIRE(response == answer);
        }
      }
    }
  }
}