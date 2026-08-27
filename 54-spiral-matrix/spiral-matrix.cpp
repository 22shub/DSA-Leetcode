class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();

        int min_r = 0, max_r = n - 1;
        int min_c = 0, max_c = m - 1;

        vector<int> v;

        while (min_r <= max_r && min_c <= max_c) {

            // left -> right
            for (int i = min_c; i <= max_c; i++)
                v.push_back(matrix[min_r][i]);
            min_r++;

            // top -> bottom
            for (int i = min_r; i <= max_r; i++)
                v.push_back(matrix[i][max_c]);
            max_c--;

            // right -> left
            if (min_r <= max_r) {
                for (int i = max_c; i >= min_c; i--)
                    v.push_back(matrix[max_r][i]);
                max_r--;
            }

            // bottom -> top
            if (min_c <= max_c) {
                for (int i = max_r; i >= min_r; i--)
                    v.push_back(matrix[i][min_c]);
                min_c++;
            }
        }

        return v;
    }
};