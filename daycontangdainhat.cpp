#include <bits/stdc++.h>
using namespace std; 
const int manx=1e5;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,ma=0,j,i;
		cin>>n;
	int a[n+5],f[n+5],vt=0,c[n+5];

	for (i=1; i<=n; i++)
		{
			cin>>a[i];
			c[i]=0;
		}
	for (i=1;i<=n;i++)
	{ 
		f[i]=1;
		for ( j=i-1; j>=0; j--)
		{
			if (a[i]>a[j]) 
			{
			  f[i]=max(f[i],f[j]+1);
			 
			}
		}
		if ( ma < f[i]) {
			vt=i;
			ma=f[i];
		}
	}
	cout<<ma<<"\n";
	int k=vt;
	while (k>=0) 
	{
		if(f[k]== ma)
		{
			c[k]=1;
			ma--;
		}
		k--;
	}
	for (i=1; i<=n; i++)
	{
		if(c[i] !=0 ) cout<<i<<" ";
	}
	return 0;
}	

