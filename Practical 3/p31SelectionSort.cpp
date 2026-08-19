#include <iostream>
using namespace std;

int main()
{
    int n,min;
    cout<<"Enter The Number Of Array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter The Element Of Array: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            arr[min]=arr[min]+arr[i];
            arr[i]=arr[min]-arr[i];
            arr[min]=arr[min]-arr[i];
        }
    }

    cout<<"Sorted array By Selection Sort: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}