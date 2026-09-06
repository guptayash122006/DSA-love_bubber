class Solution {
public:

    bool helper(vector<vector<char>>& board, string& word , int i ,int j , int n , int m , int k ) {
        // word pura match ho gaya 
        if(k == word.size() ) {
            return true ;
        }
        if(i<0 || i>= n || j< 0 || j>= m || 
            board[i][j] != word[k]) {
                return false ;
            }
        // current cell ko visited mark kerdo 
        char temp = board[i][j] ;
        board[i][j] = '#' ;
        int x[4] = {0,0,1,-1} ;
        int y[4] = {1,-1,0,0} ;

        for(int index = 0 ; index<4 ; index++) {
            if(helper(board , word , i+ x[index]
            , j+ y[index] , n , m , k+1)) {
                board[i][j] = temp ;
                return true ;
            }
        }
        // backtracking : original char wapis
        board[i][j] = temp ; 
        return false ;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size() ;
        int m = board[0].size() ;

        for(int i=0 ; i<n ; i++) {
            for(int j=0 ; j<m ; j++) {
                // word ka first char mila
            if(board[i][j] == word[0]) {
                if(helper(board , word , i , j , n , m , 0))
                return true ; 
            }
            }
        }
        return false ;
    }
};