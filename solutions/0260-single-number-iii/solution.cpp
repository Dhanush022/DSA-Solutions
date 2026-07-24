class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      long long total_xor=0;
      for(int num : nums){
        total_xor^=num;
      }
      long long diff_xor=(total_xor) & (-total_xor);
      int a=0;
      int b=0;
      for(int num : nums){
        if(num & diff_xor){
            a^=num;
        }
        else{
            b^=num;
        }
      }
      return {a,b};
    }
};

/*
 * LOGIC:
 * 1. XOR all numbers: Duplicates cancel out, leaving only (A ^ B).
 * 2. Find difference: (total_xor & -total_xor) extracts the rightmost '1' bit. 
 *    This is a column where A and B have different bits.
 * 3. Split & XOR: Use that bit as a filter to divide all numbers into two piles. 
 *    Since duplicates go to the same pile, they cancel out, leaving A in one pile and B in the other.
 */
