#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
		int a=1000001;
	bool b[a+1];
	memset(b,false,sizeof b);
	 int i,j;
    b[0]=b[1]=true;
	for(i=2;i*i<=a;i++)
	{
		if(b[i]==false)
		{
			for(j=i*i;j<=a;j+=i)
			b[j]=true;
		}
	}
	
	
}
