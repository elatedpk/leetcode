class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> m;
        for(string &str : strs){
            string k = str;
            sort(k.begin(), k.end());
            m[k].push_back(str);
        }
        vector <vector<string>> anagrams;
        for(const auto& [k,v] : m){
            anagrams.push_back(v);
        }
        return anagrams;
    }
};