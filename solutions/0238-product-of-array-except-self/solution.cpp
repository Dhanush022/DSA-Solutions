class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int post=1,pre=1;
        vector<int> result(nums.size(), 1);
        for(int i=0;i<nums.size();i++){
            result[i]=pre;
            pre*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            result[i]=result[i]*post;
            post=post*nums[i];
        }
        return result;
    }
};
