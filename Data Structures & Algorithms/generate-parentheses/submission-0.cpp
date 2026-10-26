class Solution {
public:
    vector<string> ans;

    void dfs(int n, int left, int right, string& path) {
        if (left == n && right == n) {
            ans.push_back(path);
            return;
        }

        if (left < n) {
            path.push_back('(');
            dfs(n, left+1, right, path);
            path.pop_back();
        }
        
        if (right < left) {
            path.push_back(')');
            dfs(n, left, right + 1, path);
            path.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string path = "";
        dfs(n, 0, 0, path);
        return ans;
    }
};
