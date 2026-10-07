class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for (int i : nums)
            frequency[i]++;
        priority_queue<pair<int, int>> pq;
        for (const auto& [key, value] : frequency)
            pq.push({value, key});
        vector<int> arr;
        for (int i = 0; i < k; i++){
            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;
    }
};