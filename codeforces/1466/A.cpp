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
       ll int x[n];
       scan(x,0,n);
       
       set<int> st;
       
       
       for(int i=0;i<n;i++){
       	for(int j=i+1;j<n;j++){
       		st.insert(x[j]-x[i]);
		   }
	   }
       cout<<st.size()<<endl;
		 
	    
    }
    return 0;
}
