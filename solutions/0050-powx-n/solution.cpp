class Solution {
public:
    double myPow(double x, int n) {
        double y=0;
        long c=n;
        if(c==0){
            return 1;
        }
        else if(c>0){
            return pow(x,c);
        }
        else{
            y=(1/pow(x,-(c)));
        }
        return y;
    }
};
