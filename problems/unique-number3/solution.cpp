# include <bits/stdc++.h>


using namespace std;

void updateSum(vector<int>& sumArr, int x) {
    for (int i = 0; i < 32; i++) {
        int ithBit = x & (1 << i);
        if (ithBit) sumArr[i]++;
    }
}

int numFromBits(vector<int> sumArray) {
    int num = 0;
    for (int i = 0; i < 32; i++) num += sumArray[i] * (1 << i);
    return num;
}

// Pode ser extrapolado para qualquer sequencia M*N + 1, onde nesse casom M == 3
int uniqueNumber3(vector<int> arr) {
    vector<int> sumArr(32, 0);
    for (int x : arr) updateSum(sumArr, x);

    for (int i = 0; i < 32; i++) sumArr[i] %= 3;

    return numFromBits(sumArr);
}
