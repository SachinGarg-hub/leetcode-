class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {

            // move left pointer until alphanumeric is found
            while (i < j && !isalnum(s[i])) {
                i++;
            }

            // move right pointer until alphanumeric is found
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            // compare lowercase characters
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
