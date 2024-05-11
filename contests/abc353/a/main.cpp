#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int N, H, inH;
	cin >> N >> H;
	int big = -1;
	for (int i=2; i<=N; i++){
		cin >> inH;
		if(inH > H){
			big = i;
			break;	
		}
	}
	cout << big << endl;
}
