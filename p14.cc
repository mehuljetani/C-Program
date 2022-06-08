#include<iostream>
using namespace std;
int main()
{
    int n = 0,k = 0;
    cout<<"enter the Number :";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n*2-1;i++)
    {
        (i<=n) ? k = i : k--;
        for(int j=1;j<=n;j++)
        {
            if(j>=k)
                (j==n) ? cout<<j<<" " : cout<<j<<"-";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//
//1-2-3-4-5-6-7
// 2-3-4-5-6-7
//  3-4-5-6-7
//   4-5-6-7
//    5-6-7
//     6-7
//      7
//     6-7
//    5-6-7
//   4-5-6-7
//  3-4-5-6-7
// 2-3-4-5-6-7
//1-2-3-4-5-6-7
