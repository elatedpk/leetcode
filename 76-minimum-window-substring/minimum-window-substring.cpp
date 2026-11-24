class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() == 0)
            return "";
        vector<int> freq(256, 0);
        int l {0};
        int result = INT_MAX;
        int start {0};
        int match {0};
        for(char c : t)
            freq[c]++;
        for(int r = 0; r < s.size(); r++){
            if(freq[s[r]] > 0)
               match++;
            freq[s[r]]--;
            while(match == t.size()){
                if((r-l+1) < result){
                    result = r - l + 1;
                    start = l;
                }
                freq[s[l]]++;
                if(freq[s[l]] > 0)
                    match--;
                l++;
            }
        }
        if(result == INT_MAX)
            return "";
        else
            return s.substr(start,result);

    }
};