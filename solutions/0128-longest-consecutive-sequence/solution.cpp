class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(),nums.end());
        int res=0;
        for(int n:numset){
            if(numset.find(n-1)==numset.end()){
                int cur=1;
                int curnum=n;
                while(numset.find(curnum+1)!=numset.end()){
                    curnum++;
                    cur++;
                }
                res=max(res,cur);
            }
        }
        return res;
    }
};
