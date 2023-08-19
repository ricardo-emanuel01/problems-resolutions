# include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    int temp, res = 0;
    vector<int> vec;

    cin >> n >> k;

    for (int i = 0 ; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    
    if (vec.at(k - 1) > 0) temp = vec.at(k - 1);
    else temp = 1;

    for (int i = 0; i < n; i++) {
        if (vec.at(i) < temp) break;
        else res++;
    }
    printf("%d\n", res);
}