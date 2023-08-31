# include <bits/stdc++.h>


using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int size = digits.size();
    int carry = 1;
    int temp;
    vector<int> res;

    reverse(digits.begin(), digits.end());

    for (int i = 0; i < size; i++) {
        temp = digits[i] + carry;
        carry = temp / 10;

        res.push_back(temp % 10);
    }

    if (carry) res.push_back(carry);

    reverse(res.begin(), res.end());
    return res;
}
