#include <iostream>
using namespace std;

class slot
{
private:
    int arr[11];
    int n = 1;

public:
    void getdata()
    {
        cout << "Enter no of Total Number " << endl;
        cin >> n;

        cout << "------------------------------------" << endl;

        for (int x = 0; x < n; ++x)
        {
            cout << "Enter Number " << x << endl;
            cin >> arr[x];
        }
    }
    void sortdata()
    {
        for (int i = 0; i < n - 1; i++)
        {
            int flag = 0;
            int temp = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
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
    }
    void displydata()
    {
        cout << "------------------------------------" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Number: " << i << " - " << arr[i] << endl;
        }
        cout << "------------------------------------" << endl;
    }
};
int main()
{
    slot sa;
    sa.getdata();
    sa.sortdata();
    sa.displydata();

    return 0;
}










// A72 Pratik Jade