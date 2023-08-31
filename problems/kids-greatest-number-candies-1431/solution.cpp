# include <bits/stdc++.h>


using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int size = candies.size();
    int max = candies[0];
    vector<bool> res(size);

    for (int i = 1; i < size; i++) {
        if (candies[i] > max) max = candies[i];
    }

    for (int i = 0; i < size; i++) {
        if (candies[i] + extraCandies >= max) res[i] = true;
        else res[i] = false;
    }

    return res;
}
