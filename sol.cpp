#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a, b;
		cin >> n >> a >> b;
		string s;
		cin >> s;
		int sum = 0;
		// simply add 'a' to 'sum' if the character is '0', otherwise add 'b'
		for (int i = 0; i < n; i++) {
			sum += (s[i] == '0' ? a : b);
		}
		cout << sum << '\n';
	}
	return 0;
}
