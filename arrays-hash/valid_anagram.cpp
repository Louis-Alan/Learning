/*
    Given two strings s and t, return true if t is an anagram of s, and false
   otherwise.
*/
#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
 public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> smap;
        std::unordered_map<char, int> tmap;

        for (int i = 0; i < s.length(); i++) {
            smap[s[i]]++;
            tmap[t[i]]++;
        }

        for (int i = 0; i < smap.size(); i++) {
            if (smap[i] != tmap[i])
                return false;
        }
        return true;
    }

    bool secondSoln(const std::string &s, const std::string &t) {
        if (s.length() != t.length())
            return false;

        int alpha[26];

        for (int i = 0; i < s.length(); i++) {
            alpha[s[i] - 'a']++;
            alpha[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (alpha[i] != 0)
                return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    std::cout << s.isAnagram("anagram", "nagaram");
    return 0;
}

// unordered_map<char,int> mp;

//         if(s.size() != t.size())
//             return false;

//         for(int i = 0; i < s.size(); i++)
//         {
//             mp[s[i]]++;
//             mp[t[i]]--;
//         }

//         for(auto x : mp)
//         {
//             if(x.second != 0)
//                 return false;
//         }

//         return true;

//     }
