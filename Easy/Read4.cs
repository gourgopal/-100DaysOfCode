/**
 * 157. Read N Characters Given Read4 [Premium]
 * Submission URL = https://leetcode.com/problems/read-n-characters-given-read4/submissions/892159628/
 * The Read4 API is defined in the parent class Reader4.
 *     int Read4(char[] buf4);
 */

public class Solution : Reader4 {
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    public int Read(char[] buf, int n) {
        char[] buf4 = new char[4];
        int totalChars = 0, len = 0, index = 0;
        do {
            len = Read4(buf4);
            int i = 0;
            for (; i < Math.Min(len, n - totalChars); ++i) 
            {
                buf[i + totalChars] = buf4[i];
            }
            totalChars += i;
        } while (totalChars < n && len == 4);
        return totalChars;
    }
}
