#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

TEST(P26, case_1)
{
    const std::vector<int> EXP_VEC = {1, 2};
    std::vector<int> input = {1, 1, 2};
    Solution sol;

    const auto k = sol.removeDuplicates(input);
    const std::vector<int> output(std::begin(input), std::begin(input) + k);

    EXPECT_EQ(EXP_VEC, output);
}

TEST(P26, case_2)
{
    const std::vector<int> EXP_VEC = {0, 1, 2, 3, 4};
    std::vector<int> input = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution sol;

    const auto k = sol.removeDuplicates(input);
    const std::vector<int> output(std::begin(input), std::begin(input) + k);

    EXPECT_EQ(EXP_VEC, output);
}
