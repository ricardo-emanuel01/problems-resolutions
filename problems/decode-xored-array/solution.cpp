# include <bits/stdc++.h>


using namespace std;

vector<int> decode(vector<int> encoded, int first) {
    int size = encoded.size() + 1;
    vector<int> ans(size);
    ans[0] = first;
    int pre = ans[0];

    for (int i = 1; i < size; i++) {
        ans[i] = pre ^ encoded[i - 1];
        pre = ans[i];
    }
    return ans;
}
