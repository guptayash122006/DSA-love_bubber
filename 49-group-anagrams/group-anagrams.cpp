class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string , vector<string>> mp ;

       for(string s : strs) {
        int count[26] = {0} ;

        for(char c : s) {
            count[c - 97]++ ;
        }

        string key = "" ;
        for(int i : count) {
            key += '#' ;
            key += to_string(i) ;
        }

        if(mp.find(key) == mp.end()) {
            mp[key] = vector<string> () ;
        }
        mp[key].push_back(s) ;
       } 
       vector<vector<string>> ans ;
       for(auto& pair : mp) {
        ans.push_back(pair.second) ;
       }
       return ans ;
    }
};