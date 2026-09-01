class Solution {
public:
    void nextPermutation(vector<int>& A) {
        // find the pivot element
        int pivot = -1 ;
        int n = A.size() ;
        for(int i= n-2 ; i>=0 ; i--) {
            if(A[i] < A[i+1]) {
                pivot = i ;
                break ;
            }
        }

        if(pivot == -1) {
            reverse(A.begin() , A.end()) ; // in place change
            return ;
        }

        // next larger elment
        for(int i=n-1 ; i>=0 ; i--) {
            if(A[i] > A[pivot]) {
                swap(A[i] , A[pivot]) ;
                break ;
            }
        }
        // reverse
        int i = pivot+1 ;
        int j = n-1 ;
        while(i<j) {
            swap(A[i++] , A[j--]) ;
        }
    }
};