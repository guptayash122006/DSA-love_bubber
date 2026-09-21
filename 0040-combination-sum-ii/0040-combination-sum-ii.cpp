class Solution {
private:
    void getAllCombinations(vector<int>& arr , int idx , int tar , vector<vector<int>>& ans , vector<int> combin) {
        if(tar== 0) {
           ans.push_back(combin) ;          
        return ;       
        }
         for(int i = idx; i < arr.size(); i++) {

            // duplicate skip
            if(i > idx && arr[i] == arr[i - 1])
                continue;

            // agar current element target se bada hai
            if(arr[i] > tar)
                break;

            combin.push_back(arr[i]);

            // element sirf ek baar use hoga
            getAllCombinations(arr, i + 1, tar - arr[i],
                               ans, combin);

            // backtracking
            combin.pop_back();
         }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
   

        sort(arr.begin(), arr.end());   // IMPORTANT
        vector<vector<int>> ans ;
        vector<int> combin ;

        getAllCombinations(arr , 0 , target , ans , combin) ;
        return ans ;

    }
};