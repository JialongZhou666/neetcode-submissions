class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0, i = 0, j = heights.size()-1;
        unordered_set<int> s;

        while (i < j) {
            int m = min(heights[i], heights[j]);
            if (!s.count(m)) {
                s.insert(m);
                ans = max(ans, (j - i) * min(heights[i], heights[j]));
            }
            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};
