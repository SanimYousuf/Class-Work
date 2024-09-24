#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    cout<<"Enter Your values: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter target value: "<<endl;
    int target;
    cin>>target;

    int flag = 0;
    int ind = 0;

    for(int i=0; i<n; i++)
    {
        if(target==arr[i])
        {
            flag = 1;
            ind = i+1;
            break;
        }
    }

    if(flag)
    {
        cout<<"Target found at "<<ind<<"-th position"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

    return 0;
}
