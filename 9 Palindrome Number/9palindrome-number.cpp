class Solution {
public:
    bool isPalindrome(int x) {
        long y = x;
        long div = 0;
        long pal = 0;
        while (y > 0) {
            div = y % 10;
            pal = pal * 10 + div;
            y = y / 10;
        }
        if (pal == x) {
            return true;
        } else {
            return false;
         }

    }
};