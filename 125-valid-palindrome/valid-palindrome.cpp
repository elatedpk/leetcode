class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1 || s.size() == 0)
            return true;
        string f;
        for(char i : s){
           if(isalnum(i))
               f += tolower(i);
        }
        int left = 0;
        int right = f.size()-1;
        while(left < right){
            if(f[left] != f[right])
                return false;
            left++;
            right--;
        }
        return true;
        

    }
};