#include <string>

class Solution
{
  public:
    int romanToInt(std::string s)
    {
        if (!s.size())
        {
            return 0;
        }

        auto sum = symbolToValue(s[0]);

        for (auto i = 1; i < s.size(); ++i)
        {
            const auto val = symbolToValue(s[i]);
            sum += val;

            if ((s[i] == 'M' || s[i] == 'D') && s[i - 1] == 'C')
            {
                sum -= 2 * 100;
            }
            else if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X')
            {
                sum -= 2 * 10;
            }
            else if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I')
            {
                sum -= 2 * 1;
            }
        }

        return sum;
    }

    int symbolToValue(char symbol)
    {
        switch (symbol)
        {
            case 'M':
                return 1000;

            case 'D':
                return 500;

            case 'C':
                return 100;

            case 'L':
                return 50;

            case 'X':
                return 10;

            case 'V':
                return 5;

            case 'I':
                return 1;
        };

        return 0;
    }
};
