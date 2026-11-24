class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() == 0)
            return "";
        unordered_map <char, int> tcount, scount;
        for(char c : t)
            tcount[c]++;
        int left {0};
        int right {0};
        int result = INT_MAX;
        int start {0};
        int have {0};
        int need = tcount.size();

        for(right = 0; right < s.size(); right++){
            char c = s[right];
            scount[c]++;
            if(tcount.count(c) && scount[c] == tcount[c])
                 have++;
            while(have == need){
                if((right - left + 1) < result){
                    result = right - left + 1;
                    start = left;
                }
                char d = s[left];
                scount[d]--;
                if(tcount.count(d) && scount[d] < tcount[d]){
                    have--;
                }
                left++;
            }
        }
        if(result == INT_MAX)
            return "";
        else
            return s.substr(start,result);

    }
};