class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalLength = nums1.size() + nums2.size();
        if (totalLength % 2 == 1) {
            return getKth(nums1, 0, nums2, 0, totalLength / 2 + 1);
        } 
        else {
            double mid1 = getKth(nums1, 0, nums2, 0, totalLength / 2);
            double mid2 = getKth(nums1, 0, nums2, 0, totalLength / 2 + 1);
            return (mid1 + mid2) / 2.0;
        }
    }
    double getKth(const vector<int>& nums1, int start1, const vector<int>& nums2, int start2, int k) {
        if (start1 >= nums1.size()) return nums2[start2 + k - 1];
        if (start2 >= nums2.size()) return nums1[start1 + k - 1];
        if (k == 1) return min(nums1[start1], nums2[start2]);
        int halfK = k / 2;
        int midVal1 = (start1 + halfK - 1 < nums1.size()) ? nums1[start1 + halfK - 1] : INT_MAX;
        int midVal2 = (start2 + halfK - 1 < nums2.size()) ? nums2[start2 + halfK - 1] : INT_MAX;
        if (midVal1 < midVal2) {
            return getKth(nums1, start1 + halfK, nums2, start2, k - halfK);
        } 
        else {
            return getKth(nums1, start1, nums2, start2 + halfK, k - halfK);
        }
    }
};
