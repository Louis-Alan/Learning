/*
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 */

#include <unordered_map>
#include <vector>

class Solution {
 public:
    std::vector<int> twoSum(const std::vector<int> &nums, int target) {
        std::unordered_map<int, int> mp;
        std::vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            int c = target - nums[i];
            if (mp.find(c) != mp.end()) {
                res.push_back(mp[c]);
                res.push_back(i);
                break;
            } else {
                mp.insert({nums[i], i});
            }
        }

        return res;
    }
};
