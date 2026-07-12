class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int total=0;
        int leftmax=height[0];
        int rightmax=height[right];

        while(left<right){
            if(height[left]<height[right]){
                leftmax=max(leftmax,height[left]);
                if(leftmax-height[left]>0){
                    total+=leftmax-height[left];
                }
                left++;
            }
            else{
                rightmax=max(rightmax,height[right]);
                if(rightmax-height[right]>0){
                    total+=rightmax-height[right];
                }
                right--;
            }
        }
        return total;
    }
};
