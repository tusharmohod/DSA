vector<int> spiralMatrix(vector<vector<int>> arr, int r, int c) {
    vector<int> res;
    if (r == 1) {
        for (int i = 0; i < c; i++) {
            res.push_back(arr[0][i]);
        }
        return res;
    }
    if (c == 1) {
        for (int i = 0; i < r; i++) {
            res.push_back(arr[i][0]);
        }
        return res;
    } else {
        int top = 0, left = 0, bottom = r - 1, right = c - 1;
        int i = 0;
        while (left <= right && top <= bottom) {
            for (i = left; i <= right; i++) {
                res.push_back(arr[top][i]);
            }
            if (left > right || top > bottom) {
                break;
            }
            top += 1;
            for (i = top; i <= bottom; i++) {
                res.push_back(arr[i][right]);
            }
            if (left > right || top > bottom) {
                break;
            }
            right -= 1;
            for (i = right; i >= left; i--) {
                res.push_back(arr[bottom][i]);
            }
            if (left > right || top > bottom) {
                break;
            }
            bottom -= 1;
            for (i = bottom; i >= top; i--) {
                res.push_back(arr[i][left]);
            }
            if (left > right || top > bottom) {
                break;
            }
            left += 1;
        }
    }
    return res;
}