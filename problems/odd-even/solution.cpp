# include <bits/stdc++.h>


using namespace std;

int main() {
    int n;
    int temp;
    cout << "Type a number: ";
    cin >> n;

    temp = 1 & n;
    if (temp == 1) cout << n << " is odd!\n";
    else cout << n << " is even!\n";

    return 0;
}
