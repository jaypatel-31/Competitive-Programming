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
  
       ll int n,m;
       cin>>n>>m;
       ll int a[n],b[m];
       for(ll int i=0;i<n;i++)
       {
       	cin>>a[i];
	   }
       for(ll int i=0;i<m;i++)
       {
       	cin>>b[i];
	   }	   
	   ll int count=0;
       for(ll int i=0;i<n;i++)
       {
       	    if(count==n)
       	    {
       	    	break;
			   }
       	  for(ll int j=0;j<m;j++)
       	  {
       	  	     
       	  	     
       	  	     if(a[i]<=b[j])
       	  	     { 
       	  	        b[j]=0;
       	  	     	count++;
       	  	     	break;
					  }
			 }
	   }
	  // cout<<n<<" "<<count<<endl;	   
	   cout<<n-count<<"\n";
    
    return 0;
}