# include <iostream>
# include <vector>

bool hasTime(vector<int>& time, long long givenTime, int totalTrips) {
    long long actualTrips = 0;
    for (int busTime : time) actualTrips += givenTime / busTime;
    return actualTrips >= totalTrips;
}

long long minimunTime(vector<int>& time, int totalTrips) {
    long long left = 1;
    long long right = 1LL * *max_element(time.begin(), time.end()) * total_trips;

    while (left < right) {
        long long mid = (left + right) / 2;

        if (hasTime(time, mid, totalTrips)) right = mid;
        else left = mid + 1;
    }
    return left;
}
