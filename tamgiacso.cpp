#include <bits/stdc++.h>
#define maxS 1001

using namespace std;

int n,m,ans;
int f[maxS][maxS],a[maxS][maxS];

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    	for (int j=	1; j<=i; j++)
    		cin>>a[i][j];
    
  	f[1][1] = a[1][1];
  	for (int i=2; i<=n; i++)
  		for (int j=1; j<=i; j++)
  		{
  			f[i][1]=f[i-1][1]+a[i][1];
  			f[i][j]=max(f[i-1][j-1]+a[i][j], f[i-1][j]+ a[i][j]);
		  }
  	ans=f[n][1];
  	for (int i=2; i<=n; i++)
  		ans=max(ans, f[n][i]);
    
    cout<<ans<<" "<<"\n";
    for (int i=1; i<=n; i++)
	{
		for(int j=1; j<=i;j++)
			{
				cout<<f[i][j]<<" ";
			}
		cout<<"\n";
	}
}
