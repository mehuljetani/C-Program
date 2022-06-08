#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter nth number :";
    cin>>n;
    unsigned long int arr[n];
    arr[0] = arr[1] = 1;
    for(int i=2;i<n;i++)
    {
        arr[i] = 0;
        for(int j=0;j<i;j++)
            arr[i] = arr[i-j-1] * arr[j] + arr[i];
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

