#include <unordered_set>
#include <vector>

class Solution
{
  public:
    int removeElement(std::vector<int>& nums, int val)
    {
        auto curr = 0;

        for (auto ptr = curr; ptr < nums.size(); ++ptr) {
            if (nums[ptr] != val) {
                nums[curr] = nums[ptr];
                ++curr;
            }
        }
        
        return curr;
    }
};
