# include <bits/stdc++.h> 


using namespace std;

string reverseVowels(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        while ((s[left] != 'a' && s[left] != 'e' && s[left] != 'i' && s[left] != 'o' && s[left] != 'u' &&
                s[left] != 'A' && s[left] != 'E' && s[left] != 'I' && s[left] != 'O' && s[left] != 'U') && 
                left < right) {

            left++;
        }

        while ((s[right] != 'a' && s[right] != 'e' && s[right] != 'i' && s[right] != 'o' && s[right] != 'u' &&
                s[right] != 'A' && s[right] != 'E' && s[right] != 'I' && s[right] != 'O' && s[right] != 'U') && 
                left < right) {

            right--;
        }

        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
    return s;
}

// Solution 2
bool isVowel(char x) {
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
            x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U';
}

string reverseVowels(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        while (!isVowel(s[left]) && left < right) left++;
        while (!isVowel(s[right]) && left < right) right--;

        swap(s[left++], s[right--]);
    }
    return s;
}
