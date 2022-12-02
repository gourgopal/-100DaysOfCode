//412. Fizz Buzz
//https://leetcode.com/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; ++i) {
            string strResult = "";
            
            bool isDivisibleBy5 = i % 5 == 0;
            bool isDivisibleBy3 = i % 3 == 0;
            
            if (isDivisibleBy3) {
                strResult += "Fizz";
            }
            
            if (isDivisibleBy5) {
                strResult += "Buzz";
            }
            
            if (strResult == "") {
                strResult = to_string(i);
            }
            
            result.push_back(strResult);
        }
        return result;
    }
};
