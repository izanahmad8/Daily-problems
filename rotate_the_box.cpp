vector<vector<char>> rotateTheBox(vector<vector<char>> &box)
{
    int r = box.size();
    int c = box[0].size();
    vector<vector<char>> rotate(c, vector<char>(r, '.'));
    for (int i = 0; i < r; i++)
    {
        int b = c - 1;
        for (int j = c - 1; j >= 0; j--)
        {
            if (box[i][j] == '#')
            {
                rotate[b][r - 1 - i] = '#';
                b--;
            }
            else if (box[i][j] == '*')
            {
                rotate[j][r - 1 - i] = '*';
                b = j - 1;
            }
        }
    }
    return rotate;
}