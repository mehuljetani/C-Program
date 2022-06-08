#include<iostream>
using namespace std;
int main()
{
    int n = 0,k = 0;
    cout<<"enter the n number :" ;
    cin>>n;
    for(int i=1;i<=n*2-1;i++) {
            (i<=n) ? k = n-i+1 : k++;
        for(int j=1;j<=n;j++) {
            if(j<=k)
                {
                    if(j % 2 != 0)
                        cout<<(char)(64+n-k+j)<<" ";
                    else
                        cout<<(n-k+j)<<" ";
                }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//A 2 C 4 E 6 G
//B 3 D 5 F 7
//C 4 E 6 G
//D 5 F 7
//E 6 G
//F 7
//G
//F 7
//E 6 G
//D 5 F 7
//C 4 E 6 G
//B 3 D 5 F 7
//A 2 C 4 E 6 G


