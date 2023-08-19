# include <iostream>

using namespace std;


void watermelon(int n) {
    if (n < 4) cout << "NO";
    else {
        if (n % 2 == 0) cout << "YES";
        else cout << "NO";
    }
}
