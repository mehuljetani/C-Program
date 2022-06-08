#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n = 0,cnt = 0;
    cout<<"enter the size of an array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element at ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"Distinct Largest  Are :"<<endl;
    sort(arr, arr+n);
    for(int j=n-1;j>=0;j--)
    {
        if(cnt == 3)
            break;
        if(arr[j] == arr[j+1])
            continue;
        else
            cout<<arr[j]<<" ";
            cnt++;
    }
    return 0;
}
