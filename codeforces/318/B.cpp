#include<bits/stdc++.h>
using namespace std; 
#define int long long

 main()
{
   
 
 

	string s;
	cin >> s;

	int n = s.size();

	int h = 0, ans = 0;
	for(int i=0;i<=n-5;i++)
	{
		string x = s.substr(i, 5);

		// For every metal add numbers of heavys encountered 
		if(x=="metal")
			ans += h;

		// Increment heavy strings count
		if(x=="heavy")
			h++;
	}

	cout << ans<<endl;

    return 0;
 
} 
