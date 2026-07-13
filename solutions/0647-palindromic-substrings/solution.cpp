class Solution {
public:
    int countSubstrings(string s) {
        if(s.size()==0){
            return 0;
        }
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+= ispalin(s,i,i);
            ans+= ispalin(s,i,i+1);
        }
        return ans;
    }
    int ispalin(string s,int left,int right){
        int count=0;
        while(left>=0 && right<s.size() &&  s[left]==s[right]){
            left--;
            right++;
            count++;
        }
        return count;
    }
};
