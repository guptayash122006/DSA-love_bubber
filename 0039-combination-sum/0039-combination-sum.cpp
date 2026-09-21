class Solution {
private:
    set<vector<int>> s ;
    void getAllCombinations(vector<int>& arr , int idx , int tar , vector<vector<int>>& ans , vector<int> combin) {
        if(idx== arr.size() || tar < 0) {
            return ;
        }
        if(tar== 0) {
            if(s.find(combin) == s.end()) {
               s.insert(combin);
               ans.push_back({combin}) ;
            }
        return ;
        }

        combin.push_back(arr[idx]) ;
        // single
        getAllCombinations(arr , idx+1 , tar-arr[idx] , ans , combin) ;
        // multiple
        getAllCombinations(arr , idx , tar-arr[idx] , ans , combin) ;

        // backtracking
        combin.pop_back() ;
        // exclusion
        getAllCombinations(arr , idx+1 , tar , ans , combin) ;

    }
public:
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans ;
        vector<int> combin ;

        getAllCombinations(arr , 0 , target , ans , combin) ;
        return ans ;
    }
};