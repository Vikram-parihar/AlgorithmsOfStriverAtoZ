#include<bits/stdc++.h>
using namespace std;
inline void debugMode() {
	ios_base::sync_with_stdio(false); cin.tie(0);

#ifndef ONLINE_JUDGE

	freopen("inputf.in", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}

vector<int> result(int arr[], int n) {
	vector<int>final;
	set<int>contain;
	for (int i = 0; i < n; i++) {
		contain.insert(arr[i]);
	}
	int i = contain.size();
	for (auto x : contain) {
		if (i == 1) {
			final.push_back(x);
		} else if (i == i - 2) {
			final.push_back(x);
		}
		i++;
	}
	for (auto y : final) {
		cout << y << '\n';
	}
	return final;
}

int main() {
	int t;
	debugMode();
	int n = 11;
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s ^= i;
		cout << s << '\n';
	}

	return 0;
}