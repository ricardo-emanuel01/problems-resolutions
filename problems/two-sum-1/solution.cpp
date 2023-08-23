# include <bits/stdc++.h>


using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> visited;
    int complement;

    for (int i = 0; i < nums.size(); i++) {
        complement = target - nums[i];
        if (visited.count(complement)) {
            return vector<int>{visited[complement], i};
        }
        visited.insert(make_pair(nums[i], i));
    }
    
    return vector<int>();
}