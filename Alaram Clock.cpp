#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long n;
	vector<int> x,y;
	cin>>n;
	long i,j;
	int count1=1,count2=1;
	x.resize(n);
	y.resize(n);
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i];
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	for(i=0;i<n-1;i++)
	{
		if(x[i]!=x[i+1])
			count1++;
		if(y[i]!=y[i+1])
			count2++;
	}
	if(count1<=count2)
		cout<<count1;
	else
		cout<<count2;


}
