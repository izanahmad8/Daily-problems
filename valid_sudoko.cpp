bool isValidSudoku(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        unordered_set<int> st;
        for (int j = 0; j < board.size(); j++)
        {
            if (board[i][j] == '.')
                continue;
            if (st.contains(board[i][j]))
                return false;
            st.insert(board[i][j]);
        }
    }
    for (int i = 0; i < board.size(); i++)
    {
        unordered_set<int> st;
        for (int j = 0; j < board.size(); j++)
        {
            if (board[j][i] == '.')
                continue;
            if (st.contains(board[j][i]))
                return false;
            st.insert(board[j][i]);
        }
    }
    for (int boxRow = 0; boxRow < 3; boxRow++)
    {
        for (int boxCol = 0; boxCol < 3; boxCol++)
        {
            unordered_set<int> st;
            int startRow = boxRow * 3;
            int startCol = boxCol * 3;
            for (int i = startRow; i < startRow + 3; i++)
            {
                for (int j = startCol; j < startCol + 3; j++)
                {
                    if (board[i][j] == '.')
                        continue;
                    if (st.contains(board[i][j]))
                        return false;
                    st.insert(board[i][j]);
                }
            }
        }
    }
    return true;
}