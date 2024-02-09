#include "solution.h"
#include <gtest/gtest.h>
#include <string>
using namespace std::string_literals;

TEST(P28, case_1)
{
    const auto EXP_VAL = 0;
    const auto haystack = "sadbutsad"s;
    const auto needle = "sad"s;
    Solution sol;

    const auto val = sol.strStr(haystack, needle);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P28, case_2)
{
    const auto EXP_VAL = -1;
    const auto haystack = "leetcode"s;
    const auto needle = "leeto"s;
    Solution sol;

    const auto val = sol.strStr(haystack, needle);

    EXPECT_EQ(EXP_VAL, val);
}

TEST(P28, case_3)
{
    const auto EXP_VAL = 2;
    const auto haystack = "hello"s;
    const auto needle = "ll"s;
    Solution sol;

    const auto val = sol.strStr(haystack, needle);

    EXPECT_EQ(EXP_VAL, val);
}
