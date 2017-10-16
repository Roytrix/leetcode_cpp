#include "../src/solution.hpp"
#include "catch_main.hpp"

Solution solution;

SCENARIO("return indices of the two numbers such that they add up to a "
         "specific target") {
  GIVEN("an array of speficif numbers") {
    std::vector<int> input = {3, 2, 4};
    WHEN("i find the 2 numbers that equal the target") {
      std::vector<int> response = solution.twoSum(input, 6);
      THEN("it should return an empty vector") {
        std::vector<int> answer = {1, 2};
        REQUIRE(response == answer);
      }
    }
  }
}