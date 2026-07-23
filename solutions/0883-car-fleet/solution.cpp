class Solution {
    public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;
        for (int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.rbegin(), cars.rend());
        stack<double> fleets;
        for (int i = 0; i < n; i++) {
            double currentTime = cars[i].second;
            if (fleets.empty() || currentTime > fleets.top()) {
                fleets.push(currentTime);
            }
        }
        return fleets.size();
    }
};
// iam using a 2d array to store the position and  time of the cars.Then i will sort it from the back to get the smallest at front.Then push the time to stack if the time is greater than the exixting time in the stack.Then return the length of the stack to find the fleet.
   
