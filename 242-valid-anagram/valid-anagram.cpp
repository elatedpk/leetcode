class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map <char, int> c;
        for(int i = 0; i < s.length(); i++){
            c[s[i]]++;
            c[t[i]]--;
        }
        for(const auto& [i,v] : c)
            if(v != 0)
               return false;
        return true;

    }
};