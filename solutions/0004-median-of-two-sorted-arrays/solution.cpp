class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size();
        int len2=nums2.size();
        vector<int>a(len1+len2);
        int k=0;

        for(int i=0;i<len1;i++){
            a[i]=nums1[i];
        }
        for(int j=len1;j<len1+len2;j++){
            a[j]=nums2[k];
            k++;
        }
        sort(a.begin(),a.end());
        if((len1+len2) % 2 == 0){
            return float(a[((len1+len2)/2)-1]+a[(len1+len2)/2])/2;
        }
        return a[(len1+len2)/2];
    }
};
