#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cout<<"enter the number :";
    cin>>n;
    int k = 0,x = n;
    for(int i=1;i<=n*2-1;i++)
    {
        (i<=n) ? k++ : k--;
        (i<=n) ? x-- : x++;
        for(int j=1;j<=n;j++)
        {
            if(j==n && j==i)
            {
               cout<<"-";
               continue;
            }
            if(j<=k)
                (j==1) ? cout<<k : cout<<"-"<<k-j+1;
            else
                cout<<"    ";
        }
        for(int j=1;j<=n;j++)
        {
            if(j>x)
                (j==n) ? cout<<j-x : cout<<j-x<<"-";
            else
                cout<<"   ";
        }
        cout<<endl;
    }
    return 0;
}

//1                                              1
//2-1                                      1-2
//3-2-1                              1-2-3
//4-3-2-1                      1-2-3-4
//5-4-3-2-1              1-2-3-4-5
//6-5-4-3-2-1      1-2-3-4-5-6
//7-6-5-4-3-2-1-2-3-4-5-6-7
//6-5-4-3-2-1      1-2-3-4-5-6
//5-4-3-2-1              1-2-3-4-5
//4-3-2-1                      1-2-3-4
//3-2-1                              1-2-3
//2-1                                      1-2
//1                                              1








