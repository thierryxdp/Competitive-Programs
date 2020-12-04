#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long last = 0;
		long long ans = 0;
		while(n--) {
			long long x;
			cin >> x;
			x += ans;
			if(x >= last) {
				last = x;
			} else {
				ans += last - x;
			}
		}
		cout << ans << '\n';
	}
}