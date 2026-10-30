class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> key(code.size());
        int n = code.size();
        int sum{0};
        if (k >= 0)
            for (int i = 1; i <= k; i++)
                sum += code[i % n];
        else
            for (int i = n + k; i < n; i++)
                sum += code[i];

        key[0] = sum;
        for (int i = 1; i < n; i++) {
            if (k >= 0) {
                sum += code[(i + k) % n] - code[i];
                key[i] = sum;
            } else {
                sum += code[i - 1] - code[(i + k - 1 + n) % n];
                key[i] = sum;
            }
        }
        return key;
    }
};