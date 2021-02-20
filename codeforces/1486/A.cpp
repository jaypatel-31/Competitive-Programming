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
#define pr(a) cout<<"a="<<a<<endl;
using namespace std;

int main()
{
	fastIO;
	
    tc
    {  
       ll int n,msum=0,sum=0,num=0;
       cin>>n;
       ll int h[n];
       scan(h,0,n);
      /* for(ll int i=0;i<n;i++){
       	sum=sum+h[i];
	   }
       msum=(n*(n-1))/2;
       string ans="";
       if(sum<msum){
       	ans="NO";
	   }
	   else{
	   	ans="YES";
	   	//bool d=false;
	   	int j=0,ls;
	   	for(ll int i=0;i<n;i++){
	   		ls=ls+h[i];
       	      if(h[i]<j){
       	   	    d=true;
       	   	    ans="NO";
       	   	    break;
			  }
       	    j=j+i;
	    }
	   	
	   	
	   }
       cout<<ans<<endl;*/
       ll int les=0;
       string ans="YES";
       for(ll int i=0;i<n;i++){
       	sum=sum+h[i];
       	les=les+i;
       	if(sum<les){
       		ans="NO";
       		break;
		   }
	   }
      if(ans!="NO"){
      
	  	 ll int ls=0,as=0;
       string ans="YES";
       for(ll int i=0;i<n;i++){
       	  ls=ls+i;
       	  as=as+h[i];
       	  //pr(h[i]);
       	     if(h[i]<i ){
       	  	  ans="NO";
       	  	  break;
			 }
			 else{
			 	ll int e=h[i]-i;
			 	h[i]=h[i]-e;
			 	if(i<n-1) h[i+1]=h[i+1]+e;
			 	
			 	
			 }
	//	pr(h[i]);	 
      // 	pr(ls);
	   }
	  }
       
       cout<<ans<<endl;
	}
    return 0;
}

