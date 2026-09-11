class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // merge the both sorted array
        vector<int> arr ;
        int i=0 , j=0 ;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                arr.push_back(nums1[i]) ;
                i++ ;
        }
            else{
                arr.push_back(nums2[j]) ;
                j++ ;
            }
        }

        // remaining  element
        while(i < nums1.size()) {
            arr.push_back(nums1[i]) ;
            i++ ;
        }

        while(j < nums2.size()) {
            arr.push_back(nums2[j]) ;
            j++ ;
        }

        // total number of element
        int n = arr.size() ;

        // step3 check odd / even
        if(n % 2 == 1) {
            // odd -> middle element 
            return arr[n/2] ;
        }

        else{
            return (arr[n/2 - 1] + arr[n / 2]) / 2.0 ;
        }
    }
};