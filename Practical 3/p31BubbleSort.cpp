#include <iostream>
using namespace std;

int main()
{
    int n,flag;
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
        flag=0;

        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
                flag=1;
            }
        }

        if(flag==0)
        {
            break;
        }
    }

    cout<<"Sorted array By Bubble Sort: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}