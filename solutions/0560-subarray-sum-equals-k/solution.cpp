class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixcount;
        prefixcount[0]=1;
        int count=0;
        int prefix_sum=0;
        for(int num:nums){
            prefix_sum+=num;
            if(prefixcount.count(prefix_sum-k)){
                count+=prefixcount[prefix_sum-k];
            }
            prefixcount[prefix_sum]++;
        }
        return count;
    }
};
