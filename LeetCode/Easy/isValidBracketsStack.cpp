//6.3 MB, 0ms solution on leetcode
class Solution {
public:
    bool isValid(const char c1, const char c2) {
        //c2 = opening, c1 = closing
        if (isClose(c1) and !isClose(c2)) {
            if (c1 == ')' and c2 == '(') {
                return true;
            }
            if (c1 == ']' and c2 == '[') {
                return true;
            }
            if (c1 == '}' and c2 == '{') {
                return true;
            }
            return false;
        } else {
            return false;
        }
    }
    bool isClose(const char c) {
        return c == ')' || c == '}' || c == ']';
    }
    bool isOpen(const char c) {
        return c == '(' || c == '{' || c == '[';
    }
    
    bool isValid(string s) {
        if (s.length()&1) return false;
        stack<char> brackets;
        for (char c : s) {
            if(brackets.empty()) {
                if (!isClose(c)) {
                    brackets.push(c);
                } else {
                    return false;
                }
            } else {
                if (isOpen(brackets.top()) and isOpen(c)) {
                    brackets.push(c);
                    continue;
                }
                if (isValid(c, brackets.top())) {
                    brackets.pop();
                } else {
                    return false;
                }
            }
        }
        return brackets.empty();
    }
};
