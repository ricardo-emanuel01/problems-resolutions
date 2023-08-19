# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n, m, a;
    int64_t res1 = 0;
    int64_t res2 = 0;

    cin >> n >> m >> a;

    res1 = (n + a - 1) / a;
    res2 = (m + a - 1) / a;

    cout << res1 * res2;
    return 0;
}
