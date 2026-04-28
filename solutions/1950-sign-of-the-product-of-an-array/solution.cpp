class Solution {
public:
    int arraySign(vector<int>& nums) {
        int length=nums.size();
        int num=0;
        int zero=0;
        int count=0;
        for(int i=0;i<length;i++){
            if(nums[i] ==0 ){
                return 0;
            }
            else if(nums[i]<0){
                count++;
            }
        }
        if(count % 2 ==0){
            return 1;
        }
        else{
            return -1;
        }
           
    }
};
