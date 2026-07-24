class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l=0;
        int r=nums.size()-1;
        int k=res.size()-1;
        while(l<=r){
            if(nums[l]*nums[l] < nums[r]*nums[r]){
                res[k]=nums[r]*nums[r];
                r--;
                k--;
            }
            else{
            res[k]=nums[l]*nums[l];
            l++;
            k--;
            }
        }
        return res;

    }
};

//simple 2 pointer technique to find the square and if it  is greater then place at last  in the new array.
