class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> map;
        int prefixsum=0;
        int maxlen=0;
        map[0]=-1;
        for(int i=0;i<nums.size();i++){
            prefixsum+=(nums[i]==1)?1:-1;
            if(map.count(prefixsum)){
                maxlen=max(maxlen,i-map[prefixsum]);
            }
            else{
                map[prefixsum]=i;
            }
        }
        return maxlen;
    }
};
