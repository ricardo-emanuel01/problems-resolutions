// If a sum of all digits of a number is equal to 9
// That means that the number in case is divisible by 9
int addDigits(int n) {
    if (n == 0) return 0;
    int res = n % 9;
    return res == 0 ? 9 : res;
}
