#include<bits/stdc++.h>
using namespace std;
#define pc(x) putchar(x);
#define max 200
#define gc getchar()

int m[max],n[max],i=0,j=0,diff=0;

inline int fastRead_large(int b[])
{
	int size=0;
	register char c=0;
 	while (c<33) c=gc;
 	while (c>33)
 	{
 		b[size]=c-48;
 	  	c=gc;
 	  	size++;
   	}
   	return size;
}

inline void writeInt (int n[],int s)
{
		for(int k=0;j<s;j++) pc(n[k]+48);
		pc('\n');
}

inline void dif(int m[],int n[])
{
	int sub=0,temp=0;
	int n_idx=j-1;
	for(int k=i-1;k>=0;k--,n_idx--)
	{
		//cout<<m[k]<<"        "<<n[n_idx]<<"\n";
		if(n[n_idx]>m[k])
		temp=n[n_idx]-m[k];
		else if(n[n_idx-1]!=0)
		{
			temp=(n[n_idx-1]*10+n[n_idx])-m[k];
			n[n_idx-1]--;
		}
		else if(n_idx-1!=0)
		{
			n[n_idx-1]=10+n[n_idx-1];
			temp=(n[n_idx-1]+n[n_idx])-m[k];
			n[n_idx-1]--;
		}
		sub=sub*10+temp;		
	}
	temp=0;
	for(int k=0;k<n_idx;k++)
	{
		//cout<<n[k]<<"  ";
		temp=temp*10+n[k];
	}
	cout<<--temp;
}

inline int isPrime(int m[],int n[])
{
	for(int k=0;k<diff;k++)
	{
		
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	for(int h=0;h<t;h++)
	{
		i=fastRead_large(m);
		j=fastRead_large(n);
		dif(m,n);
	}
	return 0;
}
