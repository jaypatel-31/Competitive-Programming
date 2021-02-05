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
#define pr(a) cout<<a<<endl;
using namespace std;

int main()
{
	fastIO;
	
    tc
    {  
      ll int n,k;
      cin>>n>>k;
      ll int h[n],pre[n],ma[n];
      scan(h,0,n);
      for(ll int i=0;i<n;i++){
      	pre[i]=0;
      	ma[i]=0;
	  }
	  ma[n-1]=h[n-1];
	  for(ll int i=n-2;i>=0;i--){
      	ma[i]=max((h[i]),ma[i+1]);
	  }
	  ll int masum=0;
	  for(ll int i=0;i<n;i++){
	  	masum=masum+(ma[i]-h[i]);
	  }
	  ll int sum=0,ans=-1;
	  if(masum<k) ans=-1;
	  else{
	  	for(ll int j=0;j<k;j++){
	  		int c=0;
	  		for(ll int i=0;i<n-1;i++){
	      	if(h[i+1]>h[i]){
	      		h[i]=h[i]+1;
	      		
	      		ans=i+1;
	      		break;
			  }
	      
	      }
	      
		 }
	  }
	  
	  
	  
//	  for(ll int i=0;i<n;i++){
 //     	sum=sum+pre[i];
//      	if(sum>=k){
 //     		ans=i+1;
 ////     		break;
//		  }
//	  }
	  cout<<ans<<endl;
	}
    return 0;
}

