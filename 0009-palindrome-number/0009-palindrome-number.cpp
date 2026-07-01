class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes.
        // Numbers ending in 0 (but not 0 itself) are not palindromes.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedHalf = 0;
        while (x > revertedHalf) {
            revertedHalf = revertedHalf * 10 + x % 10;
            x /= 10;
        }

        // Even digit count: x == revertedHalf
        // Odd digit count: middle digit doesn't matter, drop it via revertedHalf / 10
        return x == revertedHalf || x == revertedHalf / 10;
    }
};