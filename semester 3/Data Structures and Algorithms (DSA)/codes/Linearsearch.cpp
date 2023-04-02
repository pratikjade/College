#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int arrsize = 10;
    int found = 0;
    int key;
    for (int x = 0; x < 5; ++x)
    {
        cout << "Enter Number " << x << ":" << endl;
        cin >> a[x];
    }
    cout << "------------------------------------" << endl;
    cout << "Search Element:" << endl;
    cin >> key;

    for (int i = 0; i < arrsize; i++)
    {
        if (a[i] == key)
        {
            cout << "------------------------------------\nElement found at: " << i <<" \n------------------------------------\n";
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        cout << "------------------------------------\nElement not found\n------------------------------------\n";
    }

    return 0;
}