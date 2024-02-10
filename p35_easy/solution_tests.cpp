#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

TEST(P35, case_1)
{
    const auto EXP_VAL = 2;
    const auto target = 5;
    std::vector<int> nums = {1, 3, 5, 6};
    Solution sol;

    const auto val = sol.searchInsert(nums, target);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P35, case_2)
{
    const auto EXP_VAL = 2;
    const auto target = 5;
    std::vector<int> nums = {1, 3, 5, 6};
    Solution sol;

    const auto val = sol.searchInsert(nums, target);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P35, case_3)
{
    const auto EXP_VAL = 4;
    const auto target = 7;
    std::vector<int> nums = {1, 3, 5, 6};
    Solution sol;

    const auto val = sol.searchInsert(nums, target);

    EXPECT_EQ(EXP_VAL, val);
}
