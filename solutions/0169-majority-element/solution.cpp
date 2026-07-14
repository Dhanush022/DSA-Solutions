class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int choose=0;
        for(int num:nums){
            if(count==0){
                choose=num;
            }
            if(choose==num){
                count++;
            }
            else{
                count--;
            }
        }
        return choose;
    }
};
