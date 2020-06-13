
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
	  ll int n;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++)
	  {
	  	cin>>a[i];
	  }
	  sort(a,a+n);
	  int maxi=a[n-1];
	  int ans=-1;
	  for(int k=1;k<=(2*maxi);k++)
	  {
	  	  std::vector<int> v;
	  	 for(int i=0;i<n;i++)
	  	 {
	  	 	int x=k^a[i];
	  	 	v.push_back(x);
	  	 }
	  	 int fl=1;
	  	 sort(v.begin(), v.end());
         for(int i=0;i<n;i++)
         {
         	if(v[i]!=a[i])
         	{
         		fl=0;
         		break;
         	}
         }
         if(fl==1)
         {
         	ans=k;
         	break;
         }
         
	  }

	  cout<<ans<<endl;
    }
     cin.clear();
    cin.get();
    return 0;
}
