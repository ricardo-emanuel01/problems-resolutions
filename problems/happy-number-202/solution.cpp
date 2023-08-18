# include <unordered_set>

// A happy number is a given number which if we do
// iteratively the sum of the squares of its digits
// sometime the value will be 1;
// Here we check if the number turns out to become 1
// Or if we find a cycle, that's why I used the unordered_set
bool isHappy(int n) {
    int number;
    int temp;
    std::unordered_set<int> set;

    while (n > 1 && !set.count(n)) {
        set.insert(n);
        number = 0;

        while (n > 0) {
            temp = n % 10;
            number += temp * temp;
            n /= 10;
        }
        n = number;
    }
    return n == 1;
}
