class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // for optimal approach 
        int n = nums.size() ;
        vector<vector<int>> ans ;
        // step1:- sort the array 
        sort(nums.begin() , nums.end() ) ;
        // step2:- fix the first element
        for(int i=0 ; i<n ; i++) {
            // skip the duplicates element
        if(i>0 && nums[i] == nums[i-1]) 
            continue ;
        int j = i+1 ;
        int k = n-1 ;
        // step3:- two pointer apprach 
        while(j<k) { 
            int sum = nums[i] + nums[j] + nums[k] ;
            if(sum<0) {
                j++ ;
            }
            else if(sum > 0) {
                k-- ;
            }
            else{
                // found a valid triplet
                ans.push_back({nums[i] , nums[j] , nums[k]}) ;
                j++ ;
                k-- ;
            // skip dublicates second elements
            while(j<k && nums[j] == nums[j-1]) {
                j++ ;
            }
            }
        }
        }
            return ans ;
    }
};