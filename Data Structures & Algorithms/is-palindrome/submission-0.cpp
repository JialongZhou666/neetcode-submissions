class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        int cnt = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                if (isalpha(s[i])) clean += tolower(s[i]);
                else clean += s[i];
                cnt++;
            }
        }
        for (int i = 0; i < cnt/2; i++) {
            if (clean[i] != clean[cnt-1-i]) {
                return false;
            }
        }
        return true;
    }
};
