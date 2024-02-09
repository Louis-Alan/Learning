/*
 *  Given an array of strings strs, group the anagrams together. You can return
 * the answer in any order.
 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
 public:
    vector<vector<string>> groupAnagrams(const vector<string> &strs) {

        unordered_map<string, vector<string>> map;
        for (auto word : strs) {
            string key = word;
            sort(word.begin(), word.end());

            if (map.find(word) == map.end()) {
                map[word] = {key};
            } else {
                map[word].push_back(key);
            }
        }

        vector<vector<string>> result;
        for (auto m : map) {
            result.push_back(m.second);
        }

        return result;
    }
};

int main() {
    Solution s;
    auto val = s.groupAnagrams({"eat", "tea", "tan", "ate", "nat", "bat"});

    for (auto i : val) {
        cout << "hello";
        for (auto j : i) {
            cout << j << "\t";
        }
        cout << "\n";
    }
}
