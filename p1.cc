#include<iostream>
using namespace std;
int main()
{
    int l = 0,sum = 0;
    cout<<"enter the size of an array:";
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++)
    {
        cout<<"\nenter the array element ["<<i<<"]: ";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"\n sum = "<<sum;
    return 0;
}

