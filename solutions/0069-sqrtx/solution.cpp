class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        double guess=x/2.0;
        double pre=0.00001;

        while(abs((guess*guess)-x) > pre){
            guess=(guess+x /guess)/2.0;
        }
        return floor(guess);
    }
};
