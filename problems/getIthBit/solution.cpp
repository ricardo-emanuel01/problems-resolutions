# include <bits/stdc++.h>


using namespace std;


int getIthBit(int n, int i) {
    n >>= i - 1;
    int res = n & 1;

    return res;
}


int setIthBit(int n, int i) {
    int mask = 1 << i;
    return n | mask;
}


int clearIthBit(int n, int i) {
    int mask = ~(1 << i); // i = 5 -> ...111111101111 = mask
    return n & mask;
}


int updateIthBit(int n, int i, int v) {
    if (v == 1) return setIthBit(n, i);
    else return clearIthBit(n, i);
}


int clearLastBits(int n, int i) {
    int mask = 1;
    for (int j = 0; j < i - 1; j++) {
        mask <<= 1;
        mask++;
    }
    return n & ~mask;
}


int clearRangeBits(int n, int begin, int end) {
    int mask = 1;
    for (int i = 0; i < end - 2; i++) {
        mask <<= 1;
        mask++;
    }
    mask <<= begin;

    return n & ~mask;
}


int replaceBits(int n, int m, int begin, int end) {
    n = clearRangeBits(n, begin, end);
    m <<= begin;

    return n | m;
}


int countBits(int n) {
    int ans = 0;

    while (n > 0) {
        n &= (n - 1);
        ans++;
    }

    return ans;
}


int fastExpo(int b, int e) {
    int ans = 1;

    while (e > 0) {
        int last_bit = (e & 1);
        if (last_bit) ans *= b;
        b *= b;
        e >>= 1;
    }
    return ans;
}


int convertToBinary(int n) {
    int ans = 0;
    int p = 1;

    while (n > 0) {
        int lastBit = (n & 1);
        ans += p * lastBit;

        p *= 10;
        n >>= 1;
    }
    return ans;
}


// int updateIthBit(int n, int i, int v) {
//     clearIthBit(n, i);
//     int mask = (v << i);
//     return n | mask;
// }


int main() {
    int n, i;

    cin >> n >> i;
    cout << getIthBit(n, i) << "\n";
    cout << clearIthBit(64, 6) << "\n";
    cout << clearLastBits(7, 2) << "\n";
    cout << clearRangeBits(127, 0, 5) << "\n";
    cout << replaceBits(127, 9, 1, 5) << "\n";
    cout << countBits(55) << "\n";
    cout << fastExpo(5, 4) << "\n";
    cout << convertToBinary(10) << "\n"; 

    return 0;
}