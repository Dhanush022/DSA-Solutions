class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=find(nums,target,true);
        if(first==-1){
            return {-1,-1};
        }
        int second=find(nums,target,false);
        return {first,second};
    }
    int find(vector<int> nums,int target,bool isfirst){
        int start=0;
        int end=nums.size()-1;

        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                if(isfirst){
                    if(mid==start || nums[mid-1]!=target){
                        return mid;
                    }
                    end=mid-1;
                }
                else{
                    if(mid==end || nums[mid+1]!=target){
                        return mid;
                    }
                    start=mid+1;
                }
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
}; 
