class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int once = 0, twice = 0;
        for (int num : nums) {
            once = (once ^ num) & (~twice);
            twice = (twice ^ num) & (~once);
        }
        return once;
    }
};

//using once and twice to keep track for iterating the nums.
//if we see number once,we update once to 1 and likewise we update twice to 2 once we see the same number twice.
//if i see the nuumber thrice it cancels out and the onlly reamining number satys in once.
