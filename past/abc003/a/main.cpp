#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++){
		sum += (i + 1);
	}
	sum *= 10000;
	sum /= N;
	cout << sum << endl;
}
