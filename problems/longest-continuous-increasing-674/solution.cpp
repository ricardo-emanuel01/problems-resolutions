# include <bits/stdc++.h>


using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int n = nums.size();
    int start = 0, end = 0, res = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[end]) {
            end = i;
            res = max(res, end - start + 1);
        } else start = end = i;
    }
    return res;
}
