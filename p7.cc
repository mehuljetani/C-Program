#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter the array element ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"\nreverse array...\n";
    for(int i=n-1;i>=0;i--)
        cout<<" "<<arr[i];
    return 0;
}
