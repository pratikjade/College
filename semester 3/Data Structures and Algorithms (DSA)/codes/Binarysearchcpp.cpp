#include<iostream>
using namespace std;

int main(){
    int i, low, high, mid, n, k, array[100];

    cout<<("Enter total number of elements\n");
    cin >> n;
    cout << "------------------------------------" << endl;
    // cout << "Enter " << n << "integers" << endl;

    // for (i = 0; i < n; i++)
    // cin >> array[i];
    // cout<<("value to be find\n");
    // cin >> k;

    for (int i = 0; i < n; i++)
        {
            cout << "Enter Number " << i << endl;
            cin >> array[i];
        }
        cout << "------------------------------------" << endl;
        cout<<"Enter element to Find\n";
        cin>>k;
        cout << "------------------------------------" << endl;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (array[mid] < k)
        low = mid + 1;
        else if (array[mid] == k)
        {
        cout << "Elemnt " << k << " Founded at " << mid <<"\n"; 
        // cout<<("%d founded at %d location", k, mid + 1);
        break;
        }
        else
        high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
    // printf("Not found! %d isn't present in the list", k);
    cout<<"Not found! "<< k << " isn't present in the list\n";
    cout << "------------------------------------" << endl;
    
    return 0;
}