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
       ll int n;
       cin>>n;
       ll int a[n];
       scan(a,0,n);
       
       set<ll int >st;
       for(ll int i=0;i<n;i++){
       	st.insert((a[i]));
	   }
	   
	   ll int size=st.size();
	   	   ll int mi=*min_element(a, a+ n);
	   ll int ans=0;
	   if(size==1){
	   	ans=0;
	   }
	   else{
	   	ll int c=0;
	   	for(ll int i=0;i<n;i++){
       	   if(a[i]==mi) c++;
	    }
	    ans=n-c;
	   }
	   cout<<ans<<endl;
	}
    return 0;
}

