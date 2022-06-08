#include <string.h>
#include<iostream>
using namespace std;
int main()
{
  	char str[100];
  	int i=0,j=0,len=0,st=0,ed=0;
  	cout<<"enter the string :";
  	gets(str);
  	len = strlen(str);
  	ed = len - 1;
    cout<<endl;
  	for(i = len-1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			(i == 0) ? st = 0 : st = i + 1;
			for(j = st; j <= ed; j++)
				cout<<str[j];
			ed = i - 1;
			cout<<" ";
		}
	}
  	return 0;
}

