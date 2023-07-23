#include<bits/stdc++.h>
using namespace std;
inline void debugMode() {
	ios_base::sync_with_stdio(false); cin.tie(0);

#ifndef ONLINE_JUDGE

	freopen("inputf.in", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
vector<vector<int>> threeSum(vector<int>& arr) {
	int n = arr.size();
	vector<vector<int>>res;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		if (i > 0 && arr[i] == arr[i - 1]) continue;
		int j = i + 1;
		int k = n - 1;
		while (j < k) {
			int sum = arr[i] + arr[j] + arr[k];
			if (sum < 0) {
				j++;
			} else if (sum > 0) {
				k--;
			} else {
				vector<int>temp = {arr[i], arr[j], arr[k]};
				res.push_back(temp);
				j++; k--;
				while (j < k && arr[j] == arr[j - 1]) j++;
				while (j < k && arr[k] == arr[k + 1]) k--;
			}
		}
	}
	return res;

}


void SumofEle(int arr[], int n) {
	set<vector<int>>hashset;

	for (int i = 0; i < n; i++) {
		set<int>temp;
		for (int j = i + 1; j < n; i++) {
			int val = -(arr[i] + arr[j]);
			if (temp.find(val) != temp.end()) {
				vector<int>copy = {arr[i], arr[j], val};
				sort(copy.begin(), copy.end());
				hashset.insert(copy);
			}
			temp.insert(arr[j]);
		}
	}
	vector<vector<int>>res(hashset.begin(), hashset.end());
	for (int i = 0; i < res.size(); i++) {
		for (int j = i; j < res.size(); j++) {
			cout << res[i][j] << " ";
		}

	}
}

int main() {

	debugMode();


	int arr[] = { -1, 0, 1, 2, -1, -4};
	SumofEle(arr, 6);



	return 0;
}