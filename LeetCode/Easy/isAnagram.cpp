class Solution {
public:
    bool isAnagram(string s, string t) { //7.1 MB space as per leetcode
        int chars[26] = {0}, chart[26] = {0};
        for (char c : s) {
            chars[c-'a']++;
        }
        for (char c : t) {
            chart[c-'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (chars[i] != chart[i]) {
                return false;
            }
        }
        
        return true;
    }
    bool isAnagram2(string s, string t) { //faster + less space: Runtime: 3 ms, faster than 99.04% (Memory Usage: 7.2 MB) of C++ online submissions for Valid Anagram.
        if (s.length() != t.length()) return false;
        int chars[26] = {0}, i = 0;
        for (; i < s.length(); i++) {
            chars[s[i]-'a']++;
            chars[t[i]-'a']--;
        }
        for (i = 0; i < 26; i++) {
            if (chars[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
