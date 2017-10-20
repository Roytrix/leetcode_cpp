#include "solution.hpp"
#include <algorithm>
#include <math.h>

double Solution::findMedianSortedArrays(std::vector<int> &nums1,
                                        std::vector<int> &nums2) {

  double response{0};

  std::vector<int> mergedVec;
  std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
             std::back_inserter(mergedVec));

  switch (mergedVec.size() % 2) {
  case (0): // even
    response = 0.5 * (mergedVec[mergedVec.size() / 2] +
                      mergedVec[mergedVec.size() / 2 - 1]);
    break;

  case (1): // odd
    response = mergedVec[mergedVec.size() / 2];
    break;

  default:
    response = 0;
  }

  return response;
}