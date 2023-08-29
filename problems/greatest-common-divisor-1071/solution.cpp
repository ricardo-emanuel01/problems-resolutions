# include <bits/stdc++.h>


using namespace std;

int greatestCommonDivisor(int a, int b) {
    int res = min(a, b);

    while (res > 0) {
        if (a % res == 0 && b % res == 0) {
            return res;
        }
        res--;
    }

    return res;
}


string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 == str2 + str1) {
        return str1.substr(0, greatestCommonDivisor(str1.size(), str2.size()));
    }

    return "";
}
