# include <bits/stdc++.h>


using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int lastIdx = n * m - 1;

    int left = 0;
    int mid;
    int right = lastIdx;
    int row, column;

    while (left <= right) {
        mid = left + (right - left) / 2;
        row = mid / m;
        column = mid % m;

        if (matrix[row][column] == target) return true;
        else if (matrix[row][column] > target) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}
