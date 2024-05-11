#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int N, M;
	cin >> N >> M;
	int x, y;
	vector<vector<bool>> connect(N, vector<bool>(N, false));
	for (int i=0; i<M; i++){
		cin >> x >> y;
		connect.at(x-1).at(y-1) = true;
		connect.at(y-1).at(x-1) = true;
	}
	int ans = 0;
	int num = 0;
	bool ans_ok = true;
	for (int b = (1 << N) - 1; b >= 0; b--){
		num = bitset<32>(b).count();
		ans_ok = true;
		if(num < ans){
			continue;
		}
		for(int i=0; i<N; i++){
			for(int j=0; j<i; j++){
				if(((b >> i) & (b >> j) & 1) && !connect.at(i).at(j)){
					ans_ok = false;
				}
			}
		}
		if(ans_ok){
			ans = num;
		}
	}
	cout << ans << endl;
}
