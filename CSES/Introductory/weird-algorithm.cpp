#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
 
int32_t main()
{
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	IOS;
 
	int n; cin >> n;
	cout << n << " ";
 
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}
		cout << n << " ";
	}
 
	return 0;
}