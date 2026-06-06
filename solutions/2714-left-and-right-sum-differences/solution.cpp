class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum(nums.size(),0);
        vector<int> rightsum(nums.size(),0);
        vector<int> ans(nums.size(),0);

        for(int i=1;i<nums.size();i++){
            leftsum[i]=nums[i-1]+leftsum[i-1];
        }
        for(int j=nums.size()-2;j>=0;j--){
            rightsum[j]=nums[j+1]+rightsum[j+1];
        }
        for(int k=0;k<nums.size();k++){
            ans[k]=abs(leftsum[k]-rightsum[k]);
        }
        return ans;

    }
};
