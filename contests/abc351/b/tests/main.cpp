#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int N;
	cin >> N;
	char A[N][N];
	char B[N][N];
	for (int i=0;i<N;i++){
		for (int j =0;j<N;j++){
			cin >> A[i][j];
		}
	}
	for (int i=0;i<N;i++){
		for (int j =0;j<N;j++){
			cin >> B[i][j];
		}
	}
	for (int i=0;i<N;i++){
		for (int j =0;j<N;j++){
			if(A[i][j] != B[i][j]){
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}
}