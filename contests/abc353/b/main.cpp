#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int N, K;
	cin >> N >> K;
	int count = 0;
	int tk = K;
	vector<int> A(N);
	for (int i=0; i<N; i++){
		cin >> A.at(i);
	}
	for (int i = 0; i < N; i++){
		if (tk >= A.at(i)){
			tk -= A.at(i);
		}
		else {
			count++;
			tk = K;
			tk -= A.at(i);
		}
		if (i == N-1){
			count++;
		}
	}
	cout << count << endl;
}
