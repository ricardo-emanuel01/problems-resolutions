# include <bits/stdc++.h>


using namespace std;

int largestAltitude(vector<int>& gain) {
    int max = 0;
    int size = gain.size();
    int temp;
    vector<int> aux(size);

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            aux[i] = gain[i];
            if (temp > max) max = temp;
        } else {
            temp = aux[i] = gain[i] + aux[i - 1];
            if (temp > max) max = temp;
        }
    }
    return max;
}