#include <iostream>
using namespace std;



int main()
{

    int arr[] = {15,16,8,7,3};
    int i = 0;
    int flag = 0;
    int temp = 0;
    int n = 5;
    for (i=0 ; i<n-1; i++)
    {
        int flag=0;
        for (int j=0; j<n-1; j++)   //Comparing elements
        {
            if (arr[j]>arr[j+1])    //Check order of elements and swap them
            {
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
            //if (flag==0)
            //{
                //break;
            //}
        }
        if (flag==0)
            {
                break;
            }
    }
    for (i=0; i<n; i++)
    {
        cout<<"Value of Array:\n"<<i<<"\t"<<arr[i]<<endl;
    }
}