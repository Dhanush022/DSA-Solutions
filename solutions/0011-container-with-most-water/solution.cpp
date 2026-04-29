class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int cur_height=min(height[left],height[right]);
            int width=right-left;
            int max_h=cur_height*width;
            max_area=max(max_area,max_h);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_area;
    }
};
