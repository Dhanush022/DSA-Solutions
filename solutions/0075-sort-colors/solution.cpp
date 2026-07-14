class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int c=0;
        while(c<=r){
            if(nums[c]==0){
                swap(nums,l,c);
                c++;
                l++;
            }
            else if(nums[c]==2){
                swap(nums,r,c);
                r--;
                }
            else{
                c++;
        }
        }
    }
    void swap(vector<int>& nums,int i,int j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
};
