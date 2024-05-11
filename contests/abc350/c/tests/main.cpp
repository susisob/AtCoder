#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int N;
	cin >> N;
	int A[N];
	int i, j;
	for (i = 0; i < N; i++){
		cin >> A[i];
	}
	int swp, count = 0;
	std::vector<int> intVec{};
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			if (A[j] == i){
				if (i == j){
					continue;
				}
				else {
					intVec.push_back(i);
					intVec.push_back(j);
					swp = A[j];
					A[j] = A[i];
					A[i] = swp;
					count++;
				}
			}
		}
	}
	cout << count << endl;
	for (i = 0; i < intVec.size(); i++){
		cout << intVec[i];
		if (i % 2 == 1){
			cout << endl;
		}
	}
}