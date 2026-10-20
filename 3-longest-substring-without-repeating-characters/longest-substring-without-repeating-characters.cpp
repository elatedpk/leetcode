class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        int left = 0;
        unordered_set<char> str;
        for (int i = 0; i < s.length(); i++) {
            if (str.count(s[i]) == 0) {
                str.insert(s[i]);
                len = max(len, i - left + 1);
            } else {
                while (str.count(s[i])) {
                    str.erase(s[left]);
                    left++;
                } str.insert(s[i]);
            }
        }
        return len;
    }
};