#include <iostream>
#include <conio.h>
using namespace std;

template <class T>
T minimum(T a[], int size)
{
    T min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int main()
{
    int a[10], size, i, min1;
    float b[10], min2;
    cout << "Enter the size value:\n";
    cin >> size;
    cout << "Enter the integer array elements\n";
    for (i = 0; i < size; i++)
        cin >> a[i];
    cout << "Enter the floating array elements\n";
    for (i = 0; i < size; i++)
        cin >> b[i];
    min1 = minimum(a, size);
    min2 = minimum(b, size);
    cout << "The minimum integer element is:\n";
    cout << min1;
    cout << "\nThe minimum floating element is :\n";
    cout << min2;
    return 0;
}
