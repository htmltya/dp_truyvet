#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 1e3+5;

int n, m,sum=0,t,x=0;
int a[maxn], c[maxn],d[maxn],kt[maxn];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cin>>a[i];
		sum +=a[i];
		kt[i]=2;
	}
	for (int i=0; i<=sum; i++)
	{
		d[i]=0; c[i]=0;
	}
	d[0]=1;
	for (int i=1; i<=n; i++)
		for (t= sum; t>= a[i]; t--)
			if (d[t] == 0 and d[t-a[i]]==1)
			{
				d[t]=1;
				c[t]=i;
			}
    m = sum/2;
    while (d[m] == 0)
    	m--;
	while (c[m] > 0)
	{
		x+=a[c[m]];
		kt[c[m]]=1;
		m=m-a[c[m]];	
	}
	cout<<(sum-x)-x<<"\n";
	for (int i=1; i<=n; i++)
		if (kt[i]==1) cout<<a[i]<<" ";
	cout<<endl;
	for (int i=1; i<=n; i++)
		if (kt[i]==2) cout<<a[i]<<" ";
	return 0; 
}
	
