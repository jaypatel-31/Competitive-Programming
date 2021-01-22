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
	  int n,a,b,c,d;
	  cin>>n>>a>>b>>c>>d;
	  int range1=(n*(a-b));
	  int range2=(n*(a+b));
	  string ans="YES";
      if(range1>(c+d))
      {
      	ans="NO";
	  }
	  else if(range2<(c-d))
      {
      	ans="NO";
	  }
	  cout<<ans<<endl;
	  	
	}
}