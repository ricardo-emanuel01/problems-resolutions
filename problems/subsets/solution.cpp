# include <bits/stdc++.h>


using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length()) return a < b;
    return a.length() < b.length();
}

string filter(char arr[], int n) {
    string res = "";
    int i = 0;

    while (n > 0) {
        int currentBit = n & 1;
        if (currentBit) res += arr[i];
        i++;
        n >>= 1;
    }
    return res;
}

vector<string> findSubstrings(char arr[]) {
    int size = strlen(arr);
    vector<string> res;

    // 1 << size because each set of n characters will produce 2^n substrings 
    for (int i = 0; i < (1 << size); i++) {
        res.push_back(filter(arr, i));
    }
    return res;
}


int main() {
    char arr[] = {'a', 'b', 'c'};
    vector<string> substrings = findSubstrings(arr);
    sort(substrings.begin(), substrings.end(), compare);

    for (string x : substrings) cout << x << "\n";

    return 0;
}
