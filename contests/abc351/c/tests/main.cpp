#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 指数で扱ってミスった。たぶん計算できない。
int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i<N; i++){
		cin >> A.at(i);
	}
	vector<int> B;
	for (int i=0; i<N; i++){
		B.push_back(A.at(i));
		while(true){
			int sB = B.size();
			if(sB > 1){
				int a = B.at(sB - 1);
				int b = B.at(sB - 2);
				if(a == b){
				B.pop_back();
				B.pop_back();
				B.push_back(a + 1);
				}
				else break;
			}
			else break;
		}
	}
	cout << B.size() << endl;
}