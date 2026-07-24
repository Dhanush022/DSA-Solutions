class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int curr=0;
        for(int nxt=0;nxt<nums.size();nxt++){
            if(nums[nxt]!=0){
                swap(nums[nxt],nums[curr]);
                curr++;
            }
        }
    }
};
