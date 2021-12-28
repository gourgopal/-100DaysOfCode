using namespace std;
bool isPalindrome(string str) {
    int n = str.size();
    for (int i = 0; i < n/2; i++) {
        if (str[i] != str[n-1-i]) {
            return false;
        }
    }
    return true;
}
