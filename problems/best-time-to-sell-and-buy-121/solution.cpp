# include <bits/stdc++.h>


using namespace std;

int maxProfit(vector<int>& prices) {
    int currentMax = 0;
    int left = 0;
    int right = 1;
    int currentProfit;

    while (left < right && right < prices.size()) {
        currentProfit = prices[right] - prices[left];
        if (currentProfit > currentMax) currentMax = currentProfit;
        else if (currentProfit < 0) left = right;
        right++;
    }
    return currentMax;
}
