class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            result= result ^ nums[i];
        }
        return result;
    }
};

//using the basic XOR approach here. 2same number cancels each other and the remaiining 1 number is returned as result.
