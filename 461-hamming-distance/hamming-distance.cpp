class Solution {
public:
    int hammingDistance(int x, int y) {
        x = x ^ y;
        int c {0};
        while (x > 0) {
            if (x & 1)
                c++;
            x >>= 1;
        }
        return c;
    }
};