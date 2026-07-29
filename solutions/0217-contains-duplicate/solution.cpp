class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num:nums){
            if(seen.contains(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
//keep inserting the value in hashset and check if it already exixts.
//TC:O(n) and SC:O(n)
