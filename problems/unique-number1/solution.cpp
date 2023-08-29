# include <bits/stdc++.h>


using namespace std;

int uniqueNumber(vector<int> vec) {
    int res = 0;

    for (int x : vec) {
        res ^= x;
    }

    return res;
}
