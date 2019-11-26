#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	string x;
	string s;
	int len;
	cin>>x;
	len=x.size();
	int l=0,r=0;
	int i=0;
	int l1=0,l2=0;
	int y;
	while(x[i]!='+')
	{
		if(x[i]=='|')
			l1++;
		i++;
	}
	while(x[i]!='=')
	{
		if(x[i]=='|')
			l2++;
		i++;
	}
	while(x[i]!='\0')
	{
		if(x[i]=='|')
			r++;
		i++;
	}
	l=l1+l2;

	if((l)==r)
		cout<<x;
	else if(l-r==2)
	{
		if(l1==1)
		{
			for(i=0;i<l1+1+l2-1;i++)
			{
				cout<<x[i];
				
			}
			cout<<"=";
			for(;i<len-1;i++)
				cout<<"|";
		}
		else
		{

		s=x;
		s=s+"|";
		for(i=1;i<len+1;i++)
			cout<<s[i];
		}
	}

	
	else if(r-l==2)
	{
		s="|";
		s=s+x;
		for(i=0;i<len;i++)
		cout<<s[i];

	}
	else
		cout<<"Impossible";
}
