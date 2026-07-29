class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nummap;
        for (int i = 0; i < nums.size(); i++) {
            int compli = target - nums[i];
            if (nummap.find(compli) != nummap.end()) {
                return {nummap[compli], i}; 
            }
            nummap[nums[i]] = i;
        }
        
        return {};
    }
};
// One-pass Hash Map: Look backward for the complement.
// As you loop, calculate complement (target - nums[i]).
// If complement is in map, return {map[complement], i}.
// Else, add current {nums[i]: i} to map for future lookups.
// TC: O(n) and SC: O(n)
