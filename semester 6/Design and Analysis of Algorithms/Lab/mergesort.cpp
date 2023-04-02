#include <iostream>
#include <vector>

using namespace std;

// Merge two sorted subarrays
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);  // Temporary array to store sorted elements

    int i = left, j = mid + 1, k = 0;

    // Merge the two subarrays into temp
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy the remaining elements of left subarray into temp
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
 
    // Copy the remaining elements of right subarray into temp
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy temp back into arr
    for (i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
}

// Recursive merge sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        // Sort the left subarray
        mergeSort(arr, left, mid);

        // Sort the right subarray
        mergeSort(arr, mid + 1, right);

        // Merge the two sorted subarrays
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {14, 13, 19, 7, 5};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
// O(n log n).