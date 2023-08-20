# include <iostream>

using namespace std;

void prime_fac(int f[], int expo[], long long n) {
    long long d = 2;
    int len = 0;
    
    while ((n > 1) && (d * d <= n)) {
        int k = 0;
        
        while (n % d == 0) {
            n /= d;
            k++;
        }
        if (k > 0) {
            len++;
            f[len] = d;
            expo[len] = k;
        }
        d++;
    }
    if (n > 1) {
        len++;
        f[len] = n;
        expo[len] = 1;
    }
}


int main() {
    int f[100] = {0}, expo[100] = {0};
    long long number;

    cin >> number;

    prime_fac(f, expo, number);
    string res = "";
    
    for (int i = 0; i < 10; i++) {
        if (f[i] > 0)
            res += to_string(f[i]) + "^" + to_string(expo[i]) + " + ";
    }
    if (number > 1) {
        res.replace(res.size() - 2, 1, "=");
        res += to_string(number);
    }
    
    printf("%s\n", res.c_str());
    
    return 0;
}
