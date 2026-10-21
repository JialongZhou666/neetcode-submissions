class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                if (isalpha(s[i])) clean += tolower(s[i]);
                else clean += s[i];
            }
        }
        for (int i = 0; i < clean.size()/2; i++) {
            if (clean[i] != clean[clean.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
};
