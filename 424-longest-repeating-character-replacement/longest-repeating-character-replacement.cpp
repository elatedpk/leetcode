class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int left{0}, right{0};
        int fmax{0}, lmax{0};
        while (right < s.size()) {
            freq[s[right] - 'A']++;
            fmax = max(fmax, freq[s[right] - 'A']);
            if ((right - left + 1) - fmax > k) {
                freq[s[left] - 'A']--;
                left++;
            }
            lmax = max(right - left + 1, lmax);
            right++;
        }
        return lmax;
    }
};