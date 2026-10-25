class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0, i = 0, j = heights.size()-1;
        
        while (i < j) {
            int h = min(heights[i], heights[j]);
            ans = max(ans, (j - i) * h);

            while (i < j && heights[i] <= h) i++;
            while (i < j && heights[j] <= h) j--;
        }
        return ans;
    }
};
