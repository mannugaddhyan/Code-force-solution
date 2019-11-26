#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	vector<int> arr;
	arr.resize(101,0);
	int n;
	int count=0;
	cin>>n;
	int x,y;
	int posi,posff;
	cin>>posi>>posff;
	for(int i=1;i<=n-1;i++)
	{
		cin>>x>>y;
		for(int i=x;i<=y;i++)
			arr[i]=1;
	}
	int j,k,posf,posb;
	for(int i=posi;i<=posff;)
	{
		j=i;
		if(arr[i]==0)
		{
			j=i+1;
			k=i-1;
			posf=posff;
			posb=posi;
			while(j<=posff)
			{
				if(arr[j]==1)
				{
					posf=j;
					break;
				}
				j++;
			}
			while(k>=posi)
			{
				if(arr[k]==1)
				{
					posb=k;
					break;
				}
				k--;
			}
			count+=abs(posf-posb);
		}
		i=j+1;

	}
	cout<<count;
}
