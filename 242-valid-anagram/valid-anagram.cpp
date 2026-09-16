class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length() != t.length()) {
        //     return false ;
        // }

        // sort(s.begin() , s.end()) ;
        // sort(t.begin() , t.end()) ;
        // if(s== t) {
        //     return true  ;
        // }
        // return false ;

        // approach 2 : using asci value
        if(s.length() != t.length()) {
            return false ;
        }

        int count[26] = {0} ;
        for(char ch : s ) 
            count[ch - 97]++ ;
        for(char ch : t) 
            count[ch - 97]-- ;
        for(int val : count)
            if(val != 0)
                return false;
        return true ;

    }
};