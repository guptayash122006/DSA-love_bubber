class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        for(int i : nums) {
           int count = 0 ;
        for(int j : nums) {
            if(i == j) {
                count++ ;
            }
        }
        if(count > n/2) {
            return i ;
        }
        }
        return -1 ;
    }
};