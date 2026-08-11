#include <iostream>
#include <vector>
using namespace std;


//Merge two sorted arrays
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;  // Last element in nums1
    int j = n - 1;  // Last element in nums2
    int idx = m + n - 1;  // Last position in nums1

    // Merge from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[idx--] = nums1[i--];
        } else {
            nums1[idx--] = nums2[j--];
        }
    }
    

    // If there are remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[idx--] = nums2[j--];
    }
}
int main() {
    
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m=3; // Number of elements
    int n=3; // Number of elements
    
    merge(nums1, m, nums2, n);
    for(int num : nums1) {
        cout << num << " ";
    }
    return 0;
}