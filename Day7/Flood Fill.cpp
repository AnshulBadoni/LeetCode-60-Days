class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& ans, vector<vector<int>>& image, int incolor, int newcolor, vector<int>& delrow, vector<int>& delcol) {
        int n = image.size();
        int m = image[0].size();
        ans[r][c] = newcolor;
        for (int i = 0; i < 4; i++) {
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == incolor && ans[nrow][ncol] != newcolor) {
                dfs(nrow, ncol, ans, image, incolor, newcolor, delrow, delcol);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> ans = image;
        int incolor = image[sr][sc];
        vector<int> delrow = {-1, 0, 1, 0};
        vector<int> delcol = {0, -1, 0, 1};
        dfs(sr, sc, ans, image, incolor, newColor, delrow, delcol);
        return ans;
    }
};