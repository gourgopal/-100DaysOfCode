class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int unique_chars[256] = {0};
        int max_chars = 0;
        for (int i = 0, j = 0; i < s.length(); i++) {  //keep two pointers which define the max substring. move the right pointer to scan through the string , and meanwhile update the hashmap. If the character is already in the hashmap, then move the left pointer to the right of the same character last found. Note that the two pointers can only move forward.
            j = max(j, unique_chars[s[i]]);
            unique_chars[s[i]] = i + 1;
            max_chars = max(max_chars, i - j + 1);
        }
        return max_chars;
    }
};
