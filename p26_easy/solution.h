#include <unordered_set>
#include <vector>

class Solution
{
  public:
    int removeDuplicates(std::vector<int>& nums)
    {
        auto i = 0;

        for (auto j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] != nums[j])
            {
                nums[i + 1] = nums[j];
                ++i;
            }
        }

        return i + 1;
    }
};
