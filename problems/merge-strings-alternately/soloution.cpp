# include <bits/stdc++.h>


using namespace std;

string mergeAlternately(string word1, string word2) {
    int size1 = word1.length();
    int size2 = word2.length();
    string res;

    int i, j, counter;
    i = j = counter = 0;

    while (i < size1 && j < size2) {
        if (counter % 2 == 0) res.push_back(word1[i++]);
        else res.push_back(word2[j++]);
        counter++;
    }

    while (i < size1) res.push_back(word1[i++]);
    while (j < size2) res.push_back(word2[j++]);

    return res;
}


string mergeAlternately1(string word1, string word2) {
    int size1 = word1.size();
    int size2 = word2.size();
    int maxSize = max(size1, size2);
    string res;
    int j, k;
    j = k = 0;

    for (int i = 0; i < maxSize; i++) {
        if (i < size1) res += word1[j++];
        if (i < size2) res += word2[k++];
    }

    return res;
}
