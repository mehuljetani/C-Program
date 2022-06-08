#include<iostream>
using namespace std;
int main()
{
    int n = 0,cnt = 0;
    cout<<"enter the Size of an Array :";
    cin>>n;
    int arr[n];
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element at : ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cnt = 0;
       for(int j=0;j<n;j++)
       {
           if(arr[i] < arr[j])
               cnt++;
       }
       if(cnt >= 3)
           cout<<arr[i]<<" ";
    }
    return 0;
}

