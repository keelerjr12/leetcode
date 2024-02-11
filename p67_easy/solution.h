#include <string>

#include <iostream>
class Solution
{
  public:
    std::string addBinary(std::string a, std::string b)
    {
        const int szDiff = a.size() - b.size();
        if (szDiff > 0)
        {
            b.insert(b.begin(), szDiff, '0');
        }
        else if (szDiff < 0)
        {
            a.insert(a.begin(), -szDiff, '0');
        }

        std::string retString;

        auto carry = 0;
        for (int i = a.size() - 1; i >= 0; --i)
        {
            const int a_digit = a[i] - '0';
            const int b_digit = b[i] - '0';

            const auto saved_digit = (carry + a_digit + b_digit) % 2;
            const auto saved_digit_char = static_cast<char>(saved_digit + '0');

            carry = (carry + a_digit + b_digit) / 2;

            retString.insert(0, 1, saved_digit_char);
        }

        if (carry)
        {
            retString.insert(0, 1, '1');
        }

        return retString;
    }
};
