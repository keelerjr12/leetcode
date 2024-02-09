#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

TEST(P27, case_1)
{
    const std::vector<int> EXP_VEC = {2, 2};
    std::vector<int> input = {3, 2, 2, 3};
    Solution sol;

    const auto k = sol.removeElement(input, 3);
    const std::vector<int> output(std::begin(input), std::begin(input) + k);

    EXPECT_EQ(EXP_VEC, output);
}

TEST(P27, case_2)
{
    const std::vector<int> EXP_VEC = {0, 1, 3, 0, 4};
    std::vector<int> input = {0, 1, 2, 2, 3, 0, 4, 2};
    Solution sol;

    const auto k = sol.removeElement(input, 2);
    const std::vector<int> output(std::begin(input), std::begin(input) + k);

    EXPECT_EQ(EXP_VEC, output);
}
