#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int N, Q;
	cin >> N >> Q;
	int tooth_med[Q];
	int tooth[N];
	int i;
	for (i = 0; i < N; i++){
		tooth[i] = 1;
	}
	for (i = 0; i < Q; i++){
		cin >> tooth_med[i];
	}
	for (i = 0; i < Q; i++){
		tooth[tooth_med[i] - 1] = tooth[tooth_med[i] - 1] ^ 1;
	}
	int sum = 0;
	for (i = 0; i < N; i++){
		if (tooth[i] == 1){
			sum++;
		}
	}
	cout << sum;
}