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
       ll int px,py,x=0,y=0;
       cin>>px>>py;
       string s;
       cin>>s;
       ll int n=s.length();
       ll int u=0,d=0,r=0,l=0;
	   for(ll int i=0;i<n;i++){
	   	if(s[i]=='U'){
	   		u++;
		   }
		   else if(s[i]=='D'){
		   	d--;
		   }
		   else if(s[i]=='R'){
		   	r++;
		   }
		   else if(s[i]=='L'){
		   	l--;
		   }
		   
		   
	   }       
       y=u+d;
       x=r+l;
       l=abs(l);
       d=abs(d);
       string ans="NO";
       if(x==px  && y==py){
       	ans="YES";
	   }
	   else{
	   	if(x==px){
	   		   if(y>py &&(u)>=(y-py)){
	   			ans="YES";
			   }
			   else if(y<py   && d>=(py-y)){
			   	ans="YES";
			   }
		   }
		else if(y==py){
			if(x>px &&(r)>=(x-px)){
	   			ans="YES";
			   }
			   else if(x<px   && l>=(px-x)){
			   	ans="YES";
			   }
		}
		else{
			if(y>py &&(u)>=(y-py)){
	   			if(x>px &&(r)>=(x-px)){
	   			ans="YES";
			   }
			   else if(x<px   && l>=(px-x)){
			   	ans="YES";
			   }
			}
			else if(y<py   && d>=(py-y)){
			   if(x>px &&(r)>=(x-px)){
	   			ans="YES";
			   }
			   else if(x<px   && l>=(px-x)){
			   	ans="YES";
			   }
			}
		}
	   }
	   cout<<ans<<endl;
	}
    return 0;
}

