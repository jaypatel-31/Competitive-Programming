
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
   #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
    #endif
    ll int t;
	cin>>t;
	while(t--)
	{ 
	  ll int a,b,cnt=0;
	  cin>>a>>b;
	   if(a>b) swap(a,b);
	   while(a<b)
	   {
	   	   if((a*8)<=b) a=a*8;
	   	   else if ((a*4)<=b) a=a*4;
	   	   else if ((a*2)<=b) a=a*2;
	   	   else break;
	   	   cnt++;
	   }
	   if(a==b) cout<<cnt<<endl;
	   else cout<<"-1"<<endl;
    }
     cin.clear();
    cin.get();
    return 0;
}
