class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int, int>> cars;

        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.rbegin(), cars.rend());

        int res = 0;
        double maxTime = 0;

        for (auto [p, s] : cars) {
            double t = (double)(target - p) / s;

            if (t > maxTime) {
                res++;
                maxTime = t;
            }
        }
        return res;
    }
};
