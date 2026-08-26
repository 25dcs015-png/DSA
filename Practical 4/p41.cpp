#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> queue;

    queue.insert(queue.begin(), 101);
    for (int x : queue)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    queue.push_back(102);
    for (int x : queue)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    int patient = 103;
    int position = 1;

    if (position<=queue.size()) 
    {
        queue.insert(queue.begin() + position, patient);
    } 
    else 
    {
        cout<<"Invalid position!"<<endl;
    }

    for (int x : queue)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}