#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long n,m;
	long sum=0;
	cin>>n>>m;
	vector<vector<int> > mat(n,vector<int> (n,1));
	vector<vector<int> > cost(n,vector<int> (n,0));
	vector<int> visited,dis;
	visited.resize(n,0);
	dis.resize(n,100000);
	long min=100000;
	long pos;


	long i,j,k;
	long x,y;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		cost[x-1][y-1]=1;
		cost[y-1][x-1]=1;
	}
	for(i=0;i<n;i++)
		mat[i][i]=0;

	x=1;
	visited[x-1]=1;
	dis[x-1]=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(visited[j]==0 &&  mat[x-1][j])
			{
				dis[j]=cost[x-1][j];
			}
		}
		min=100000;
		for(k=0;k<n;k++)
		{
			if(visited[k]==0 && dis[k]<=min)
			{
				min=dis[k];
				pos=k;
			}
		}
		x=pos+1;
		visited[pos]=1;
		sum+=dis[pos];
	}
	cout<<sum;
}
