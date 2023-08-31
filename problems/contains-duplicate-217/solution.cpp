# include <bits/stdc++.h>


using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;
    for (int x : nums) {
        if (set.count(x)) return true;
        set.insert(x);
    }
    return false;
}
