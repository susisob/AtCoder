#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	long MOD = 1e9 + 7;
	int R, C, X, Y, D, L;
	cin >> R >> C >> X >> Y >> D >> L;
	vector<vector<long>> comb(1000, vector<long>(1000, 0)); //intだと無理, longは環境で変わるらしい。
	for (int i = 0; i < 1000; i++){
		comb.at(i).at(0) = 1;
		for (int j = 1; j <= i; j++){
			comb.at(i).at(j) = (comb.at(i-1).at(j-1) + comb.at(i-1).at(j)) % MOD;
		}
	}
	long sum = 0;
	for (int i = 0; i < 1 << 4; i++){
		int bit = bitset<32>(i).count();
		int TX = X;
		int TY = Y;
		if((i >> 0) & 1) TX--;
		if((i >> 1) & 1) TX--;
		if((i >> 2) & 1) TY--;
		if((i >> 3) & 1) TY--;
		if(TX < 0 || TY < 0 || TX * TY < D + L){
			continue;
		}
		if (bit % 2 == 0){
			sum += comb.at(TX * TY).at(D + L) * comb.at(D + L).at(D) % MOD;
		}
		else {
			sum -= comb.at(TX * TY).at(D + L) * comb.at(D + L).at(D) % MOD;
		}
		sum = (sum + MOD) % MOD;
	}
	sum *= (R - X + 1) * (C - Y + 1);
	cout << sum % MOD << endl;
}

