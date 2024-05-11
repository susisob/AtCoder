#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int MOD = 1e8;

int f(int x, int y){
	return (x + y) % MOD;
}

int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i=0; i<N; i++){
		cin >> A.at(i); 
	}
	sort(A.begin(), A.end());
	long res = 0;
	for (int i=0; i<N; i++){
		for (int j=A.size() - 1; j >= i + 1;j--){
			if ((A.at(i) + A.at(j)) / MOD != 0){
				res += (A.at(j) * (A.size() -1)) % MOD;
				A.pop_back();
			}
			else {
				res += f(A.at(i), A.at(j));
			}
		}
	}
	cout << res << endl;
}
