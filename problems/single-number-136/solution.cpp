# include <bits/stdc++.h>


using namespace std;

int singleNumber(vector<int>& nums) {
    int res = nums[0];
    int size = nums.size();
    for (int i = 1; i < size; i++) {
        res ^= nums[i];
    }
    return res;
}
