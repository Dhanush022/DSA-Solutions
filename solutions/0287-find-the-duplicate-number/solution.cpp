class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[nums[0]];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        int ptr=0;
        while(slow!=ptr){
            slow=nums[slow];
            ptr=nums[ptr];
        }
        return slow;
    }
};

//the slow and fast pointer is used to iterate and slow pointer points to the ans's prev value. We take antother ptr and move 1 place to find the final answer.
