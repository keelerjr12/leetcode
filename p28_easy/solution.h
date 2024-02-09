#include <string>

class Solution
{
  public:
    int strStr(std::string haystack, std::string needle)
    {
        for (auto i = 0; i < haystack.size(); ++i)
        {
            auto j = 0;
            while ((i + j) < haystack.size() && (j < needle.size()) &&
                   (haystack[i + j] == needle[j]))
            {
                ++j;
            }

            if (j == needle.size())
            {
                return i;
            }
        }

        return -1;
    }
};
