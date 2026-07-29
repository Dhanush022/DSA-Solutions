class Solution {
public:
    char findTheDifference(string s, string t) {
        s+=t;
        int c=0;
        for(const auto& x:s){
            c^=x;
        }
        return c;
    }
};
