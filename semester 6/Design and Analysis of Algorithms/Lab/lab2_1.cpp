//Iterative Approach to Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter the number to be searched: ";
    cin >> x;
    int result = binarySearch(arr, n, x);
    if (result == -1)
        cout << "Element not present in the array";
    else
        cout << "Element found at index " << result << endl;
    return 0;
}
