class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nummap;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            nummap[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int compli=target-nums[i];
            if(nummap.count(compli) && nummap[compli]!=i){
                return {i,nummap[compli]};
            }
        }
        return {};
    }
};
