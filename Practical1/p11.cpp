#include <iostream>
using namespace std;

int main()
{
    int n,h;
    cout<<"Enter the value of N: ";
    cin>>n;
    int arr[n];
    cout<<"\n Enter Value in arr:-\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of hr: ";
    cin>>h;
    h=h%n;
    for(int i=1;i<=h;i++)
    {  
        int temp = arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}