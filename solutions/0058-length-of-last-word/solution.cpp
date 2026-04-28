class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int count=0;
        for(int i=len-1;i>=0;i--){
            if(s[i] == ' ' ){
                if(count>0){
                     return count; }
            }else{
            count++;
            }
        }
        return count;
    }
};
