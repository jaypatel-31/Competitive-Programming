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
bool check(string s,int length)
{
	int one=0,two=0,three=0;
	for(int i=0;i<length;i++)
	{
		if(s[i]=='1') one++;
		else if(s[i]=='2') two++;
		else three++;
	}
	
	if(one && two && three) return true;

    int left=0,right=length;
    int n=s.length();
    while(right<n)
    {
       if(s[left]=='1') one--;
		else if(s[left]=='2') two--;
		else three--;	

		left++;

		if(s[right]=='1') one++;
		else if(s[right]=='2') two++;
		else three++;

		right++;
		if(one && two && three) return true;
    }

     return false;

}
int main()
{

	fastIO;
    ll int t;
	cin>>t;
	while(t--)
	{ 
	   string s;
	   cin>>s;
	   int n=s.length();
	   int low=3,high=n;
	   int ans=0;
	   while(low<=high)
	   {
	   	 int mid=(high+low)/2;
	   	 if(check(s,mid)==true)
	   	 {
	   	 	ans=mid;
	   	 	high=mid-1;
	   	 }
	   	 else 
	   	 {
	   	 	low=mid+1;
	   	 }
	   }
	cout<<ans<<endl;
	}


    return 0;
}
