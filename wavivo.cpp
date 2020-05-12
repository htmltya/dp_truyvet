#include <bits/stdc++.h>
using namespace std; 

int main()
{
	int n,i,j,ma=0,vt=i,a1,b1,ma1,ma2;
	cin>>n;
	int a[n+5], l[n+5],x[n+5], c[n+5];
	// l la day tang
	// x la day giam
	for (i=1; i<=n; i++)
	{
		cin>>a[i];
		c[i]=0;
	}
	x[n+1]=0;
	l[0]=0;
	for (i=n; i>=1; i--)
	{
		x[i]=1;
		for (j=i+1; j<=n; j++)
			if(a[i]>a[j]) x[i]=max(x[i],x[j]+1);
	}

	for (i=1; i<=n; i++)
	{
		l[i]=1;
		for(j=i-1; j>=0; j--)
			if(a[i]>a[j]) l[i]=max(l[i],l[j]+1);
		if ((l[i]+x[i])-1 > ma) {
			ma=(l[i]+x[i])-1;
			ma1=l[i];
			ma2=x[i];
			a1=i;
			b1=i;
		}
	}
	cout<<ma<<"\n";
	while(a1>=0)
	{
		if(l[a1]==ma1)
		{
			c[a1]=1;
			ma1--;
		}
		a1--;
	}
	while(b1<=n)
	{
		if(x[b1]==ma2)
		{
			c[b1]=1;
			ma2--;
		}
		b1++;
	}
	for (i=1; i<=n; i++)
	{
		if(c[i] !=0 ) cout<<i<<" ";
	}
	return 0;
}	

/*
for (i=1; i<=n; i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<"\n";
	for (i=1; i<=n; i++)
	{
		cout<<l[i]<<" ";
	}
*/


