class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //    vector<int> temp ;
    //     for(int i=0 ; i<m ; i++) {
    //         temp.push_back(nums1[i]) ;
    //     }
    //     for(int j=0 ; j<n ; j++) {
    //         temp.push_back(nums2[j]) ;
    //         }
    //     sort(temp.begin() , temp.end()) ;

    //     for(int i=0 ; i< m+n ; i++) {
    //         nums1[i] = temp[i] ;
    //     }

    // for a better optimal solution 
    int i = m-1 ;
    int j = n-1 ;
    int k = m+n-1 ;

    while(i>= 0 && j>= 0 ) {
        if(nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--] ;
        }

        else{
            nums1[k--] = nums2[j--] ; 
        }
    }

    while(j >= 0) {
        nums1[k--] = nums2[j--] ;
    }

    }
};