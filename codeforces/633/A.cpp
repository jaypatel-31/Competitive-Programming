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
    ll int a,b,c;
    cin>>a>>b>>c;
    string ans="No";
    for(int i=0;i<=c;i++)
    {
    	for(int j=0;j<=c;j++)
    	{
    		if(((a*i)+(b*j))==c)
    		{
    			ans="Yes";
			}
		}
	}
      cout<<ans;
    return 0;
}