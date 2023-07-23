#include<bits/stdc++.h>
using namespace std;
inline void debugMode() {
	ios_base::sync_with_stdio(false); cin.tie(0);

#ifndef ONLINE_JUDGE

	freopen("inputf.in", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}

int main() {
	debugMode();

	vector<vector<int>> arr   {{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}};
	// int arr[3][3];

	int n = arr.size(); // no. of nows
	int m = arr[0].size(); // no. of columns
	int top = 0; int left = 0; int right = m - 1; int bottom = n - 1;
	while (left <= right && top <= bottom) {
		for (int i = left; i <= right; i++) {
			cout << arr[top][i] << " ";
		}
		top++;

		for (int i = top; i <= bottom; i++) {
			cout << arr[i][right] << " ";

		}
		right--;

		if (top <= bottom) {
			for (int i = right; i >= left; i--) {
				cout << arr[bottom][i] << " " ;
			}
			bottom--;
		}

		if (left <= right) {
			for (int i = bottom; i >= top; i--) {
				cout << arr[i][left] << " ";
			}
			left++;
		}
	}
	return 0;
}

// rotate a matrix in clockwise direction
// #include <bits/stdc++.h>

// void rotateMatrix(vector<vector<int>> &mat, int n, int m)
// {
//     // Write your code here
//     int left=0;int top=0;int right=m-1;int bottom=n-1;


//     while(left<right && top<bottom){
//             int temp=mat[top+1][left];
//         for(int i=left;i<=right;i++){
//             int var=temp;
//             temp=mat[top][i];
//             mat[top][i]=var;
//         }

//         top++;
//         for(int i=top;i<=bottom;i++){
//             int var=temp;
//             temp=mat[i][right];
//             mat[i][right]=var;
//         }
//         right--;
//         if(top<=bottom){
//             for(int i=right;i>=left;i--){
//                 int var=temp;
//             temp=mat[bottom][i];
//             mat[bottom][i]=var;
//             }
//         }
//         bottom--;
//         if(left<=right){
//             int i=0;
//             for(i=bottom;i>=top;i--){
//                 int var=temp;
//             temp=mat[i][left];
//             mat[i][left]=var;
//             }
//         }

//         left++;


//     }




// }