class Solution {
public:
    int secondHighest(string s) {
        int high=-1;
        int shigh=-1;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int val = s[i] - '0';
                if(val>high){
                    shigh=high;
                    high=val;
                }
                else if(val>shigh && val!=high){
                    shigh=val;
                }
            }
        }
        return shigh;
    }
};
