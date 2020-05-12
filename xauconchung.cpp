#include <bits/stdc++.h>
#define maxS 1001


using namespace std;

string a,b,c="";
int f[maxS][maxS],dem=0;

int main(){
    cin>>a>>b;
    a.insert(0," ");
    b.insert(0," ");
    int n=a.size();
    int m=b.size();
   
    for(int i=1; i<n;i++)
  	  for(int j=1; j<m; j++)
        if(a[i]==b[j]) f[i][j]=f[i-1][j-1]+1;
        else f[i][j]=max(f[i-1][j],f[i][j-1]);
        
        
/*  for (int i=0; i<n; i++)
    {
    	for (int j=0; j<m; j++)
    		cout<<f[i][j]<<" ";
    	cout<<"\n";
    }*/
    cout<<f[n-1][m-1]<<"\n";

    int	i=n-1, j=m-1;
	while (i !=0 || j !=0)
	{
		if (a[i] == b[j])
		{
			//cout<<a[i];
			c+=a[i];
			i--;j--;	
		}else {
			if (f[i][j] == f[i-1][j]) i--;
			else j--;
		}
	} 
	for (i=c.length()-1; i>=0; i--)
		cout<<c[i];
    return 0;
}
