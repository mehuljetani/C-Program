#include<iostream>
using namespace std;
int main()
{
    int l = 0,maxx = 0;
    cout<<"enter the size of an array:";
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++)
    {
        cout<<"\nenter the array element ["<<i<<"] : ";
        cin>>arr[i];
        if(arr[i]>maxx)
            maxx = arr[i];
    }
    cout<<"\n max = "<<maxx;
    return 0;
}
