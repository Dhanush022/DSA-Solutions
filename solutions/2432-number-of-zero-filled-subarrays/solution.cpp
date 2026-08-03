class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        int contiguous=0;
        for(int num:nums){
            if(num==0){
                contiguous++;
            }
            else{
                contiguous=0;
            }
            count+=contiguous;
        }
        return count;
    }
};
