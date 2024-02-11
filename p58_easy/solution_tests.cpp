#include "solution.h"
#include <gtest/gtest.h>
#include <string>

TEST(P58, case_1)
{
    const auto EXP_VAL = 5;
    const std::string str = "Hello World";
    Solution sol;

    const auto val = sol.lengthOfLastWord(str);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P58, case_2)
{
    const auto EXP_VAL = 4;
    const std::string str = "   fly me   to   the moon  ";
    Solution sol;

    const auto val = sol.lengthOfLastWord(str);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P58, case_3)
{
    const auto EXP_VAL = 6;
    const std::string str = "luffy is still joyboy";
    Solution sol;

    const auto val = sol.lengthOfLastWord(str);

    EXPECT_EQ(EXP_VAL, val);
}
