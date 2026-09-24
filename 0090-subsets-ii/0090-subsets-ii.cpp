class Solution {
private:
    void backtrack(int i , vector<int>& nums , vector<int>& subset , vector<vector<int>>& result) {
        // base case 
        if(i == nums.size()) {
            return result.push_back(subset) ;
        }
        subset.push_back(nums[i]) ;
        // recursion
        backtrack(i+1 , nums , subset , result) ;
        subset.pop_back() ;

        while(nums.size() > i+1 && nums[i] == nums[i+1]) {
            i++ ;
        }

        backtrack(i+1 , nums , subset , result) ;


    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result ;
        vector<int> subset ;
        sort(nums.begin() , nums.end()) ;
        backtrack(0 , nums , subset , result) ;
        return result ;
    }
};