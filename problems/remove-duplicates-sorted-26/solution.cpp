# include <bits/stdc++.h>


using namespace std;

int removeDuplicates(vector<int>& nums) {
    int left = 0, right = 1;
    int counter = 1;
    int size = nums.size();

    while (right < size) {
        if (nums[right] != nums[left]) {
            nums[++left] = nums[right];
            counter++;
        }
        right++;
    }
    return counter;
}
