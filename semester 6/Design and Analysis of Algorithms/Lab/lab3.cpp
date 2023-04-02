#include <iostream>
#include <ctime>

void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main()
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int *arr = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000 + 1;

    clock_t start = clock();
    quickSort(arr, 0, n - 1);
    clock_t stop = clock();
    double duration = (double)(stop - start) / CLOCKS_PER_SEC;

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout << "Time taken by function: " << duration << " seconds" << std::endl;

    return 0;
}
