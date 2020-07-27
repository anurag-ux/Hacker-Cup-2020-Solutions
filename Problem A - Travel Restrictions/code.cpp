#include <iostream>
#include <bitset>  // **** <bits/stdc++.h> is not a standard header
#include <limits>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <string>
#include <algorithm>
#define fo(a,X) for(int a=0;a<X;a++)


using namespace std;

void solve(int n,int x);

int main()
{
	int t,n;
	cin>>t;
	fo(i,t)
	{
		cin>>n;
		solve(n,i);
	}
	cout<<endl;
}

void solve(int n,int x)
{
	char i[n]; //incoming permission
	char o[n]; //outgoing permission
	char p[n][n]; //final matrix
	
	fo(j,n)
	cin>>i[j];
	fo(j,n)
	cin>>o[j];
	
	cout<<"Case #"<<x+1<<": "<<endl;
	
	fo(a,n)
	{
		fo(b,n)
		{
			if(a==b)
			p[a][b]='Y';
			else
			{
				if(abs(a-b)==1)
				{
					if(o[a]=='Y' && i[b]=='Y')
					p[a][b]='Y';
					else
					p[a][b]='N';
				}
				else
				{
					if ((i[b]=='N') || (o[a]=='N'))
					p[a][b]='N';
					else
					{
						bool flag=true;
						int l;
						if(a<b){
							for(l=a+1;l<b;l++)
							if(i[l]=='N' or o[l]=='N')
							flag=false;
						}
						else{
							for(l=a-1;l>b;l--)
							if(i[l]=='N' or o[l]=='N')
							flag=false;
						}
						if(flag==false)
						p[a][b]='N';
						else
						p[a][b]='Y';
					}
				}
			}
			cout<<p[a][b];
		}
		cout<<endl;
	}
	
	/*cout<<"Case #"<<x+1<<": "<<endl;
	
	fo(a,n)
	{
		fo(b,n)
		{
			cout<<p[a][b];
		}
		cout<<endl;
	}*/
}
