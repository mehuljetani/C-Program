#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    cout<<"enter the string:";
    gets(str);
    cout<<endl;
    int cnt = strlen(str);
    for(int i=cnt-1;i>=0;i--)
        cout<<str[i];
    return 0;
}

