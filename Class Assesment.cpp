#include<bits/stdc++.h>
using namespace std;

void deleteSeat(int n, int arr[], int s)
{
    int target = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==s)
        {
            target = i;
            break;
        }
    }
    for(int i=target; i<n; i++)
    {
        arr[i] = arr[i+1];
    }

    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

searchSeat(int n, int arr[], int sp)
{
    n = n-1;
    int r = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==sp)
        {
            r = i+1;
            break;
        }
    }

    cout<<"Desired seat "<<sp<<" is in "<<r<<"-th number position!"<<endl;
}

void bubleSort(int n, int arr[])
{
    n= n-1;
    int temp = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"After sorting: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    cout<<"Enter total seat capability: ";
    int n;
    cin>>n;

    cout<<"Enter the seat numbers: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Which seat you want to delete: "<<endl;
    int s;
    cin>>s;

    deleteSeat(n,arr,s);
    bubleSort(n,arr);

    cout<<endl;
    cout<<"Search a specific seat number: ";
    int sp;
    cin>>sp;
    searchSeat(n,arr,sp);

    return 0;
}
