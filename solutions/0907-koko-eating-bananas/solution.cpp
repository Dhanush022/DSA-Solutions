class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1  , right = *max_element(piles.begin(),piles.end() ) ;
        while(left <= right )
        {
            long mid=left+(right-left)/2;
            long hours=0;
            for(int pile:piles)
            {
                hours += ceil(double(pile)/mid);
            }
            if(hours <= h )
            {
                right= mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return left ;
    }
};
