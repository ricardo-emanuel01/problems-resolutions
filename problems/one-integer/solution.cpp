# include <bits/stdc++.h>


using namespace std;

int solve(vector<int> nums) {
    // To keep the order of the elements without sort this
    // every time
    priority_queue<int> kill;
    int cost = 0;
    int temp;

    // As priority queue in C++ use a max heap
    // we need to invert the elements to push to the
    // queue and remember to invert this again to use
    for (int x : nums) kill.push(x * (-1));

    while (kill.size() > 1) {
        temp = kill.top() * (-1);
        kill.pop();
        temp += kill.top() * (-1);
        kill.pop();

        cost += temp;
        kill.push(temp * (-1));
    }

    return cost;
}