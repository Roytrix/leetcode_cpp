#include "../src/solution.hpp"
#include "catch_main.hpp"

Solution solution;

SCENARIO("Find the median of the two sorted arrays.") {
  GIVEN("two sorted arrays") {
    WHEN("i give 1,2 and 2") {
      std::vector<int> nums1{1, 2};
      std::vector<int> nums2{2};
      THEN("the median is 2 .0") {
        double response = solution.findMedianSortedArrays(nums1, nums2);
        double answer = 2.0;
        REQUIRE(response == answer);
      }
    }
    WHEN("i give nothing and 2") {
      std::vector<int> nums1{};
      std::vector<int> nums2{2};
      THEN("the median is 2 .0") {
        double response = solution.findMedianSortedArrays(nums1, nums2);
        double answer = 2.0;
        REQUIRE(response == answer);
      }
    }
    WHEN("i give 1 and 3") {
      std::vector<int> nums1{1};
      std::vector<int> nums2{3};
      THEN("the median is 2.0") {
        double response = solution.findMedianSortedArrays(nums1, nums2);
        double answer = 2.0;
        REQUIRE(response == answer);
      }
    }
    WHEN("i give 1,2 and 3,4") {
      std::vector<int> nums1{1, 2};
      std::vector<int> nums2{3, 4};
      THEN("the median is 2.5") {
        double response = solution.findMedianSortedArrays(nums1, nums2);
        double answer = 2.5;
        REQUIRE(response == answer);
      }
    }
  }
}
