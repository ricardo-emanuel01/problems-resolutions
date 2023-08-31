# include <bits/stdc++.h>


using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res = {{1}};

    for (int i = 1; i < numRows; i++) {
        vector<int> temp;
        for (int j = 0; j < i + 1; j++) {
            if (j == 0) temp.push_back(1);
            else if (j == i) temp.push_back(1);
            else temp.push_back(res[i - 1][j - 1] + res[i - 1][j]);
        }
        res.push_back(temp);
    }
    return res;
}
