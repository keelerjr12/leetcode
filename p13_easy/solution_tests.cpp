#include "solution.h"
#include <gtest/gtest.h>

TEST(P13, three)
{
    const auto EXP_ANS = 3;
    Solution sol;

    const auto ans = sol.romanToInt("III");

    EXPECT_EQ(EXP_ANS, ans);
}

TEST(P13, fifty_eight)
{
    const auto EXP_ANS = 58;
    Solution sol;

    const auto ans = sol.romanToInt("LVIII");

    EXPECT_EQ(EXP_ANS, ans);
}

TEST(P13, nineteen_ninety_four)
{
    const auto EXP_ANS = 1994;
    Solution sol;

    const auto ans = sol.romanToInt("MCMXCIV");

    EXPECT_EQ(EXP_ANS, ans);
}
