/*
    Given an integer array nums,
    return true if any value appears at least twice in the array,
    and return false if every element is distinct.
*/

#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        std::unordered_set<int> hash;
        for (auto i : nums)
        {
            if (hash.find(i) != hash.end())
            {
                return true;
            }
            hash.insert(i);
        }
    }

    bool bestSoln(std::vector<int> &nums)
    {
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
    }
};

int main()
{
    Solution s;
    std::vector<int> nums = {1, 2, 3, 1};
    std::cout << s.containsDuplicate(nums);
    std::cout << "hello";
    return 0;
}