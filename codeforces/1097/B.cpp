#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
# define ll long long
int main()
{
    fastIO;
   #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
     int n,sum=0,tot=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        tot+=a[i];
    }
    if((tot%360)==0)
    {
        cout<<"YES"<<endl;
        exit(0);
    }
   
    string ans="NO";
     for(int num = 0;num < (1<<n);num++) {
        sum=0;
        for(int i = 0;i<n;i++) {
            if((num & (1<<i))!=0) {
                sum=sum+a[i]; 
            }
            else
                sum -= a[i];
        }
        if(sum%360==0)
        {
            ans="YES";
            break;
        }
        
    }
    cout<<ans<<endl;
    cin.clear();
    cin.get();
    return 0;
}