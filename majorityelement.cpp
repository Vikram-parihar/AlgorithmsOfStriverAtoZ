#include<bits/stdc++.h>
using namespace std;
inline void debugMode() {
	ios_base::sync_with_stdio(false); cin.tie(0);

#ifndef ONLINE_JUDGE

	freopen("inputf.in", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	sort(v.begin(), v.end())
	ve; ctor<int>res
	;	int cnt = 1;
	int value = v.size() / 3;
	// cout<<value;
	for (int i = 1; i <= v.size(); i++) {
		if (v[i] == v[i - 1]) {
			cnt++;
			// if(cnt>value){
			// 	res.push_back(v[i]);
			// }
		}
		else if (cnt > value) {
			res.push_back(v[i - 1]);
			cnt = 1;
		} else {
			cnt = 1;
		}
	}
	if (v.size() == 1) {
		return v;
	} else {
		return res;
	}

}

int main() {
	int t;
	debugMode();
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>find;

		for (int i = 0; i < n; i++) {
			int val;
			cin >> val;
			find.push_back(val);
		}
		vector<int>result = majorityElement(find);
		for (auto x : result) {
			cout << x << " ";
		}
		cout << '\n';
	}
	return 0;
}