#include <algorithm>
#include <cctype>
#include <string>

class Solution
{
  public:
    int lengthOfLastWord(std::string s)
    {
        const auto it_end =
            std::find_if(std::rbegin(s), std::rend(s), [](unsigned char c) {
                return std::isalpha(c);
            });

        const auto it_beg = std::find(it_end, std::rend(s), ' ');
        const auto sz = std::distance(it_beg.base(), it_end.base());

        return sz;
    }

    /* int lengthOfLastWord(std::string s)
    {
        int lastChar = s.size() - 1;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] != ' ')
            {
                lastChar = i;
                break;
            }
        }

        int firstChar = 0;
        for (int i = lastChar; i >= 0; --i)
        {
            if (s[i] == ' ')
            {
                firstChar = i + 1;
                break;
            }
        }

        return lastChar - firstChar + 1;
    } */
};
