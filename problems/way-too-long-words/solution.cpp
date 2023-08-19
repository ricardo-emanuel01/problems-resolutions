# include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string temp;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp.size() > 10) cout << *temp.begin() << to_string(temp.size() - 2) << *(temp.end() - 1);
        else cout << temp;

        printf("\n");
    }
    return 0;
}
