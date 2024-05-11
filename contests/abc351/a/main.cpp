#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	vector<int> A(9);
	vector<int> B(8);
	for (int i = 0; i< 9; i++){
		cin >> A.at(i);
	}
	for (int i = 0; i< 8; i++){
		cin >> B.at(i);
	}
	int a_sum = accumulate(A.begin(), A.end(), 0);
	int b_sum = accumulate(B.begin(), B.end(), 0);
	cout << a_sum - b_sum + 1 << endl;
}