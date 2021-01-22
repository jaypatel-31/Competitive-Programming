#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define fo(i,a,b) for(i=a;i<b;i++)
#define foe(i,a,b) for(i=a;i<=b;i++)
#define scan(arr, a, n)  for (ll i = (a); i < (n); i++) cin >> (arr)[i];
#define print(arr, a, n) for (ll i = (a); i < (n); i++) cout << (arr)[i] << " ";
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
     	ll int l,r;
     	cin>>l>>r;
     	ll int n1=l;
     	if(r>2*(n1)  || r==2*(n1))
     	{
     		cout<<n1<<" "<<(2*n1)<<endl;
		 }
		 else
		 {
		 	cout<<-1<<" "<<-1<<endl;
		 }
	 }
     
     
    return 0;
}

