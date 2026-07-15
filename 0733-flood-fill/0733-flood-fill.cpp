class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int rows = image.size();
        int cols = image[0].size();

        int orgColor = image[sr][sc];

        // If the original color is already the target color,
        // no need to do anything.
        if (orgColor == color)
            return image;

        function<void(int, int)> dfs;

        dfs = [&](int r, int c) {
            // Out of bounds
            if (r < 0 || r >= rows || c < 0 || c >= cols)
                return;

            // Different color, stop DFS
            if (image[r][c] != orgColor)
                return;

            // Paint current cell
            image[r][c] = color;

            // Visit 4 directions
            dfs(r - 1, c); // Up
            dfs(r + 1, c); // Down
            dfs(r, c - 1); // Left
            dfs(r, c + 1); // Right
        };

        dfs(sr, sc);

        return image;
    }
};