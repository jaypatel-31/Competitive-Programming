/*
                             Author-Jay Patel
*/

#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define fo(i,a,b) for(i=a;i<b;i++)
#define foe(i,a,b) for(i=a;i<=b;i++)
#define mod 1000000007
#define ll long long 
#define ld long double
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
	fastIO;
    int n;
    cin>>n;
    int a[n],pre1[n],pre2[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	pre1[i]=0;
    	pre2[i]=0;
	}
	for(int i=0;i<n;i++)
    {
       if(i==0) 
       {
       	  pre1[i]=a[i];
	   }
	   else
	   {
	   	pre1[i]=pre1[i-1]+a[i];
	   }
	}
	for(int i=n-1;i>=0;i--)
    {
       if(i==(n-1)) 
       {
       	  pre2[n-1-i]=a[i];
	   }
	   else
	   {
	   	 pre2[n-1-i]=pre2[n-2-i]+a[i];
	   }
    }
/*	 for(int i=0;i<n;i++)
     {
    	cout<<pre1[i]<<" ";
   	}
    
		cout<<endl;
	 
	 for(int i=0;i<n;i++)
     {
    	cout<<pre2[i]<<" ";
     }
 */  
     	int alice=0,bob=0,i=0;
     	while(1)
     	{
     		if(n==1)
     		{
     			bob=-1;
     			break;
			 }
			else
			{
				if((alice +bob ==n-2))
	     		{
	     			break;
				 }
	     		if(pre1[alice]<=pre2[bob]) {
	     			alice++;
				 }
				else
				{
					bob++;
				}
			}
		 }
		 
		// cout<<endl;
	 cout<<alice+1<<" "<<bob+1<<endl;
	 
}