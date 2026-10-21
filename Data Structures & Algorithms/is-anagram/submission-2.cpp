class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> cnt;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            cnt[c]++;
        }
        for (int i = 0; i < t.size(); i++) {
            char c = t[i];
            cnt[c]--;
        }
        for (const auto& p : cnt) {
            if (p.second != 0) return false;
        }

        return true;
    }
};
