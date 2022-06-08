#include<iostream>
using namespace std;
int main()
{
    int n = 0,k = 0;
    cout<<"enter the Number : ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n*2-1;i++)
    {
        (i<=n) ? k = i : k--;
        for(int j=1;j<=n;j++)
        {
            if(j>=k)
            {
                if(j % 2 == 0)
                     cout<<j-k+1<<" ";
                else
                    cout<<(char)(64+j-k+1)<<" ";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//
//A 2 C 4 E 6 G
//  1 B 3 D 5 F
//    A 2 C 4 E
//      1 B 3 D
//        A 2 C
//          1 B
//            A
//          1 B
//        A 2 C
//      1 B 3 D
//    A 2 C 4 E
//  1 B 3 D 5 F
//A 2 C 4 E 6 G
