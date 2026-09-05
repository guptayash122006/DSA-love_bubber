class Solution {
public:

    bool search(vector<vector<char>>& board, string word,
                int row, int col, int index) {

        // पूरे word के सभी characters मिल गए
        if (index == word.length()) {
            return true;
        }

        // बाहर चले गए या character match नहीं हुआ
        if (row < 0 || row >= board.size() ||
            col < 0 || col >= board[0].size() ||
            board[row][col] != word[index]) {
            return false;
        }

        // Current cell को temporarily visited mark करो
        char original = board[row][col];
        board[row][col] = '*';

        // चारों directions में अगले character को खोजो
        bool found =
            search(board, word, row + 1, col, index + 1) || // Down
            search(board, word, row - 1, col, index + 1) || // Up
            search(board, word, row, col + 1, index + 1) || // Right
            search(board, word, row, col - 1, index + 1);   // Left

        // वापस original character रख दो
        board[row][col] = original;

        return found;
    }


    bool exist(vector<vector<char>>& board, string word) {

        int rows = board.size();
        int cols = board[0].size();

        // हर cell से word शुरू करने की कोशिश करो
        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {

                if (search(board, word, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};