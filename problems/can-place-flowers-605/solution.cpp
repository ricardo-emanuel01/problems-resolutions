# include <bits/stdc++.h>


using namespace std;

// Greedy
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int size = flowerbed.size();
    int flag = false;

    if (n == 0) return true;

    if (size == 1) {
        if (n > 1) return false;
        if (n == 1) {
            if (flowerbed[0] == 0) return true;
            return false;
        }
    }

    for (int i = 0; i < size; i++) {
        if (flowerbed[i] == 0) {
            if (flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
            } else if (i == size - 1) {
                if (flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            } else {
                if (flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
    }
    if (n < 1) return true;
    return false;
}


bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    for (int i = 0; i < flowerbed.size(); i++) {
        // Check if the current plot is empty.
        if (flowerbed[i] == 0) {
            // Check if the left and right plots are empty.
            bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
            bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
            
            // If both plots are empty, we can plant a flower here.
            if (emptyLeftPlot && emptyRightPlot) {
                flowerbed[i] = 1;
                n--;
                if (!n) {
                    return true;
                }
            }
        }
    }
    return n < 1;
}
