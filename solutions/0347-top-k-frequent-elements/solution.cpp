class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k==nums.size()){
            return nums;
        }
        unordered_map<int,int> count;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]==0){
                ans.push_back(nums[i]);
            }
            count[nums[i]]++;
        }
        sort(ans.begin(),ans.end(),[&](int a,int b){
            return count[a]>count[b];
        });
        ans.resize(k);
        return ans;
        }
};

