#include "solution.h"
#include <gtest/gtest.h>

TEST(P67, case_1)
{
    const auto EXP_VAL = "100";
    const std::string a{"11"};
    const std::string b{"1"};
    Solution sol;

    const auto val = sol.addBinary(a, b);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P67, case_2)
{
    const auto EXP_VAL = "10101";
    const std::string a{"1010"};
    const std::string b{"1011"};
    Solution sol;

    const auto val = sol.addBinary(a, b);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P67, case_3)
{
    const auto EXP_VAL = "1000";
    const std::string a{"1"};
    const std::string b{"111"};
    Solution sol;

    const auto val = sol.addBinary(a, b);

    EXPECT_EQ(EXP_VAL, val);
}
