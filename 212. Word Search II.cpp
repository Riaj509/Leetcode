class Solution
{
    // stores words in a map, so that lookup in dfs can be done in O(1) time
    unordered_set<string> mp;
    // global state is used for easy insertion of ans by dfs
    vector<string> ans;
    // stores the maximum length of string
    int mx;

    void dfs(vector<vector<char>> &board, int i, int j, vector<vector<bool>> &visit, string &word)
    {
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size())
            return;
        if (visit[i][j] || word.length() >= mx)
            return;

        word.push_back(board[i][j]);

        // if mp contains the word, it is added to the answer
        // also, word is removed imediately from the map, to prevent duplicates
        // in answer
        if (mp.count(word))
        {
            ans.push_back(word);
            mp.erase(word);
        }

        // dfs calls
        visit[i][j] = true;
        dfs(board, i + 1, j, visit, word);
        dfs(board, i - 1, j, visit, word);
        dfs(board, i, j + 1, visit, word);
        dfs(board, i, j - 1, visit, word);

        // reverting visit and word to previous state
        visit[i][j] = false;
        word.pop_back();
    }

public:
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        // visit array for dfs calls
        vector<vector<bool>> visit(board.size(), vector<bool>(board[0].size(), false));
        mx = 0;

        // this loop adds words to the mp, and finds the max length string
        for (auto word : words)
        {
            mp.insert(word);
            mx = max(mx, (int)word.length());
        }

        // this loop calls dfs for all cells of the board
        string s = "";
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                dfs(board, i, j, visit, s);
            }
        }

        return ans;
    }
};