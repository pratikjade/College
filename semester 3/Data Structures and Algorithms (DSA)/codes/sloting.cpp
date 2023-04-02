# include <iostream>
using namespace std;

int main()
{

    int arr[] = {15,16,8,7,3};
    int i = 0;
    int n = 5;
    int flag = 0;
    int temp = 0;
    for (i = 0; i<n-1; i++)
    {
        flag = 0;
        for (int j = 0; j<n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << "value of array: " << i << "-" << arr[i] << endl;
    }
}
