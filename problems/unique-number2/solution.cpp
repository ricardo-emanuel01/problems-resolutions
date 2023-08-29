# include <bits/stdc++.h>


using namespace std;

pair<int, int> uniqueNumber(vector<int> vec) {
    int result = 0;
    int pos = 0;
    int mask;
    pair<int, int> res(0, 0);

    // Get the number correspondent of all numbers XORed
    for (int x : vec) {
        result ^= x;
    }

    // Check the position of the first bit set
    while ((result & 1) == 0) {
        pos++;
        result >>= 1;
    }

    mask = 1 << pos;
    // Group them
    for (int x : vec) {
        if ((x & mask) == 1) res.first ^= x;
        else res.second ^= x;
    }

    return res;
}
