class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
        int j = 0;
        int len = s.length();
        int sum = 0;
        for (i = 0; s[i] != 0; i++) {
            if (i > 0 && (s[i] == 'V' && s[i - 1] == 'I' ||
                          s[i] == 'X' && s[i - 1] == 'I' ||
                          s[i] == 'L' && s[i - 1] == 'X' ||
                          s[i] == 'C' && s[i - 1] == 'X' ||
                          s[i] == 'D' && s[i - 1] == 'C' ||
                          s[i] == 'M' && s[i - 1] == 'C')) {
                continue;
            } else if (s[i] == 'I' && s[i + 1] == 'V') {
                sum += 4;
            } else if (s[i] == 'I' && s[i + 1] == 'X') {
                sum += 9;
            } else if (s[i] == 'X' && s[i + 1] == 'L') {
                sum += 40;
            } else if (s[i] == 'X' && s[i + 1] == 'C') {
                sum += 90;
            } else if (s[i] == 'C' && s[i + 1] == 'D') {
                sum += 400;
            } else if (s[i] == 'C' && s[i + 1] == 'M') {
                sum += 900;
            } else if (s[i] == 'I') {
                sum += 1;
            } else if (s[i] == 'V') {
                sum += 5;
            } else if (s[i] == 'X') {
                sum += 10;
            } else if (s[i] == 'L') {
                sum += 50;
            } else if (s[i] == 'C') {
                sum += 100;
            } else if (s[i] == 'D') {
                sum += 500;
            } else if (s[i] == 'M') {
                sum += 1000;
            }
        }
        return sum;
    }
};