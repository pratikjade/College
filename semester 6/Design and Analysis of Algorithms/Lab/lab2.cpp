//Implement Binary search program with Divide and Conquer design strategy for n numbers using C++. Discuss Best, Average and Worst time complexity
//Recursive implementation of Binary Search:
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter the number to be searched: ";
    cin >> x;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "Element not present in the array";
    else
        cout << "Element found at index " << result << endl;
    return 0;
}

// Best time complexity: O(1)
// Average time complexity: O(log n)
// Worst time complexity: O(log n)














//Best time complexity: O(1)
//This occurs when the element being searched for is present at the middle of the array. 
//In this case, the algorithm will only make one comparison and return the index of the element.
//Average time complexity: O(log n)
//This occurs when the element being searched for is not present at the middle of the array. 
//In this case, the algorithm will repeatedly divide the array into smaller subarrays until the element is found or it is determined that the element is not present in the array.
//Worst time complexity: O(log n)
//This occurs when the element being searched for is not present in the array. In this case, 
//the algorithm will repeatedly divide the array into smaller subarrays until it is determined that the element is not present in the array.
// Note: The time complexity of binary search is logarithmic, which means that it grows logarithmically with the size of the input. 
//This makes it very efficient, especially when working with large arrays.