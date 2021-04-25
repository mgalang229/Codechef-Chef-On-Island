#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double x, y, xr, yr, d;
		cin >> x >> y >> xr >> yr >> d;
		// divide 'x' by 'xr' to get the no. of days for the food supply
		x /= xr;
		// divide 'y' by 'yr' to get the no. of days for the water supply
		y /= yr;
		// check if the minimum between 'x' and 'y' is greater than or equal to 'd'
		cout << (min(x, y) >= d ? "YES" : "NO") << '\n';
	}
	return 0;
}
