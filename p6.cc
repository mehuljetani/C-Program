#include<iostream>
using namespace std;
void rotation(int [],int,int);
int main()
{
    int n = 0,d = 0;
    cout<<"enter the size of an array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter an element at ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"enter index to rotate array:";
    cin>>d;
    rotation(arr,d,n);
    return 0;
}
void rotation(int arr[],int d,int n)
{
    for(int i=0;i<n;i++)
		cout<<arr[(i+d)%n]<<" ";
}
