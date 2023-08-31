# include <bits/stdc++.h>


using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int size = nums.size();
    vector<int> preffix(size);
    vector<int> postfix(size);
    vector<int> res(size);

    for (int i = 0; i < size; i++) {
        if (i == 0) preffix[i] = nums[i];
        else preffix[i] = preffix[i - 1] * nums[i];
    }

    for (int i = size - 1; i > -1; i--) {
        if (i == 0) postfix[i] = nums[i];
        else postfix[size - i - 1] = postfix[size - i - 2] * nums[i];
    }

    for (int i = 0; i < size; i++) {
        if (i == 0) res[i] = postfix[size - 2];
        else if (i == size - 1) res[i] = preffix[size - 2];
        else res[i] = preffix[i - 1] * postfix[size - i - 2];
    }

    return res;
}
