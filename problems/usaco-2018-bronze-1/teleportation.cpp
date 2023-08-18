# include <bits/stdc++.h>


using namespace std;

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int dist = abs(a - b);

	if (dist > abs(a - c) + abs(b - d)) {
		dist = abs(a - c) + abs(b - d);
	}


	if (dist > abs(a - d) + abs(b - c)) {
		dist = abs(a - d) + abs(b - c);
	}

	cout << dist << endl;
}
