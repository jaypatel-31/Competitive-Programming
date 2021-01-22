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
    ll int t;
	cin>>t;
	while(t--)
	{ 
	   int n,k;
	  cin>>n>>k;
		int mini = n; 
		for(int i = 1;i*i<=n;i++) {
		    if(n%i==0) {
		        if(i<=k) {
		            mini = min(mini, n/i); 
		        }
		        if((n/i)<=k) {
		            mini = min(mini, i); 
		        }
		    }
	    }
	    cout<<mini<<endl;	    
	}

    return 0;
}