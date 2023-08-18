# include <vector>

// As nums1 comes with the extra space in it we can merge it
// using the greatest items first to save time and space
// If nums1 did not come with the correct size, we could use
// resize method on it
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i > -1 && j > -1) {
        if (nums1.at(i) > nums2.at(j)) nums1.at(k--) = nums1.at(i--);
        else nums1.at(k--) = nums2.at(j--);
    }
    while (i > -1) nums1.at(k--) = nums1.at(i--);
    while (j > -1) nums1.at(k--) = nums2.at(j--);
}
