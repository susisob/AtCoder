#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int N, K;
	cin >> N >> K;
	vector<int> R(N);
	for (int i = 0; i < N; i++){
		cin >> R.at(i);
	}
	sort(R.begin(), R.end());
	double rate = 0.0;
	for (int i = N - K; i < N; i++){
		rate = (rate + R.at(i)) / 2.0;
	}
	cout << fixed << setprecision(12) << rate << endl;
}
