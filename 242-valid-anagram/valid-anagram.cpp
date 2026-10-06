class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int f[26] = {0};
        for(char c: s)
            f[c - 'a']++;
        for(char d: t){
            f[d - 'a']--;
        }
        for(int i : f)
            if(i != 0)
                return false;
        return true;

    }
};