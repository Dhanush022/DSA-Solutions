class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> temp;
        int n=temperatures.size();
        vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        while(!temp.empty() && temperatures[i]>temperatures[temp.top()]){
            int index=temp.top();
            temp.pop();
            ans[index]=i-index;
        }
        temp.push(i);
    }
    return ans;
    }
};
