//1342. Number of Steps to Reduce a Number to Zero
//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            if (num & 1) {
                --num; //reducing by 1
            }
            else {
                num >>= 1; //shifting one bit towards right i.e. dividing the number by half
            }
            ++steps;
        }
        return steps;
    }
};
