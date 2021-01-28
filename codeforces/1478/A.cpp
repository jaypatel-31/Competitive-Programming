#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define scan(arr, a, n)  for (ll i = (a); i < (n); i++) cin >> (arr)[i];
#define mod 1000000007
#define ll long long 
#define ld long double
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc ll int (t);cin>>(t);while(t--)
using namespace std;

int main()
{
	fastIO;
	
    tc
    {  
      ll int n;
      cin>>n;
      ll int a[n];
      scan(a,0,n);
      ll int c=1;
      bool pre=true;
      map<ll int,ll int> mp;
      for(ll int i=0;i<n;i++){
      	mp[(a[i])]=0;
	  }
	  for(ll int i=0;i<n;i++){
	  	mp[(a[i])]++;
	  }
	  ll int mi=-1;
      for(ll int i=0;i<n;i++){
      	mi=max(mi,(mp[(a[i])]));
	  }

      cout<<mi<<endl;
      
	}
    return 0;
}

