# include <bits/stdc++.h>


using namespace std;

const int MAX = 100;

int solution() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<bool> painted(MAX + 1);
    for (int i = a; i < b; i++) painted[i] = true;
    for (int i = c; i < d; i++) painted[i] = true;

    int total = 0;
    for (bool i : painted) total += i;

    cout << total << "\n";

    return 0;
}


int solutionOpt() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int total = b - a + d - c;
    int intersection = max(min(b, d) - max(a, c), 0);
    int ans = total - intersection;

    cout << ans << "\n";

    return 0;
}
