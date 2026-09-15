class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        // approach 1.
        // string ans = "";
        // for (int i = 0; i < strs[0].length(); i++) {
        //     for (int j = 0; j < strs.size() - 1; j++) {
        //         if (strs[j][i] != strs[j + 1][i])
        //             return ans;
        //     }
        //     ans += strs[0][i];
        // }
        // return ans;

        // approach 2.
        string ans = "" ;
        sort(s.begin() , s.end()) ;
        int i=0 ;
        while(i < s[0].length() && s[0][i] == s[s.size()-1][i]) {
            ans += s[0][i] ;
            i++ ;
        }
        return ans ;
    }
};