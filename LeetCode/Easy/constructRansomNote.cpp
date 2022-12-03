//383. Ransom Note
//https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransomNoteArr[26] = {0};
        int magazineArr[26] = {0};
        
        for (int i = 0; i < magazine.length(); ++i) {
            ++magazineArr[magazine[i] - 97];
        }
        
        for (int i = 0; i < ransomNote.length(); ++i) {
            ++ransomNoteArr[ransomNote[i] - 97];
        }
        
        for (int i = 0; i < 26; ++i) {
            if (magazineArr[i] - ransomNoteArr[i] < 0) {
                return false;
            }
        }
        
        return true;
    }
};
